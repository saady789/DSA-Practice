class Solution {
public:
int solve4(vector<int> nums) {
    int s = nums.size();
    int n1 = 0;
    int n2 = nums[s-1];
    for(int i=s-2;i>=0;i--){
        int n = nums[i];
        int inc = n+n1;
        int exc = n2;
        int m = max(inc,exc);
        n1=n2;
        n2=m;

    }

   return n2;
}
    int rob(vector<int>& nums) {
            if(nums.size()==1) return nums[0]; 
        int i = nums[0];
        nums.erase(nums.begin());
        int ans1 = solve4(nums);
        nums.insert(nums.begin(),i);
        nums.pop_back();
        int ans2 = solve4(nums);
        return max(ans1,ans2);

    }
};