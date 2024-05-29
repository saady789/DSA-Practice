class Solution {
public:
    int solve5(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > ans.back()) {
                ans.push_back(nums[i]);
            } else {
                int index =
                    lower_bound(ans.begin(), ans.end(), nums[i]) - ans.begin();
                ans[index] = nums[i];
            }
        }
        return ans.size();
    }
    static bool compare(const std::vector<int>& a, const std::vector<int>& b) {
        if (a[0] == b[0])
            return a[1] > b[1]; // Sort by height in descending order if widths
                                // are the same
        return a[0] < b[0];     // Sort by width in ascending order
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(), compare);
        vector<int> input;
        for(int i=0;i<envelopes.size();i++){
            input.push_back(envelopes[i][1]);
        }
        return solve5(input);
    }
};