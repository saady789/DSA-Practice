class Solution {
public:
    bool check(vector<int> base,vector<int> newbox){
        if(newbox[0] <= base[0] && newbox[1] <= base[1] && newbox[2] <= base[2]) return true;
        else return false;
    }
    int solve4(vector<vector<int>>& a) {
        vector<int> currR(a.size() + 1, 0);
        vector<int> nextR(a.size() + 1, 0);
        for (int curr = a.size() - 1; curr >= 0; curr--) {
            for (int prev = curr - 1; prev >= -1; prev--) {
                int taken = 0;
                if (prev == -1 || check(a[curr],a[prev]))
                    taken = a[curr][2] + nextR[curr + 1];
                int nottaken = 0 + nextR[prev + 1];
                currR[prev + 1] = max(taken, nottaken);
            }
            nextR = currR;
        }
        return nextR[0];
    }
    int maxHeight(vector<vector<int>>& cuboids) {
        // step1 sort each row
        for (vector<int>& a : cuboids) {
            sort(a.begin(), a.end());
        }
        // step 2 sort each row by either width or height
        sort(cuboids.begin(), cuboids.end());
        // step 3 final check for calculatin height

        return solve4(cuboids);
    }
};