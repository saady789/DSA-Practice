class Solution {
public:
    int solve(int n){
        //base case
        if(n==0) return 0;
        //processing + recursive calls ;
        int mini = n;
        for(int i=1;i*i<=n;i++){
            int x = 1+solve(n-(i*i));
            mini = min(mini,x);
        }
        return mini;

    }

    int solve2(int n,vector<int> &dp){
        //base case
        if(n==0) return 0;
        //processing + recursive calls ;
        if(dp[n] != -1) return dp[n];
        int mini = n;
        for(int i=1;i*i<=n;i++){
            int x = 1+solve2(n-(i*i),dp);
            mini = min(mini,x);
        }
        dp[n] = mini;
        return dp[n];

    }
    int solve3(int n){
        vector<int> dp(n+1,1000000);
        dp[0] = 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j*j<=i;j++){
                dp[i] = min( dp[i],1+dp[i-(j*j)] );
            }
        }


        return dp[n];

    }
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
        int ans = solve3(n);
        return ans;
    }
};