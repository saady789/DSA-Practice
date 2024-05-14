#include <bits/stdc++.h> 
#include<vector>
//recursion
int solve(vector<int> weight,vector<int> value,int n,int maxWeight){
  //base case
  if(n==weight.size()){
    if(maxWeight - weight[n] >=0 ) return weight[n];
    else return 0;
  }
  //processing + recursive calls 
  int include = 0;
  if( maxWeight - weight[n] >=0 ){
    include = value[n] + solve( weight,value,n+1,maxWeight-weight[n] );
  }
  int exclude = 0 + solve(weight,value,n+1,maxWeight);
  int ans = max(include,exclude);
  return ans;

}
//DP1 Top Down
int solve2(vector<int> weight,vector<int> value,int n,int maxWeight,vector<vector<int>> &dp){
  //base case
  if(n==weight.size()){
    return 0;
  }
  //processing + recursive calls 
  int include = 0;
  if(dp[n][maxWeight] != -1) return dp[n][maxWeight];
  if( maxWeight - weight[n] >=0 ){
    include = value[n] + solve2( weight,value,n+1,maxWeight-weight[n],dp );
  }
  int exclude = 0 + solve2(weight,value,n+1,maxWeight,dp);
  dp[n][maxWeight] = max(include,exclude);
  return dp[n][maxWeight];

}
//DP2 Bottom Up Tabulation
int solve3(vector<int> weight,vector<int> value,int n,int maxWeight){
    vector<vector<int>> dp(n,vector<int>(maxWeight+1,0));
        int x = n-1;
                for (int i = weight[x]; i <= maxWeight; i++) {
           dp[x][i] = value[x]; 
        }


                for (int i = n-2; i >= 0; i--) {
                for (int j = 1; j <= maxWeight; j++) {
          int include = 0;
                  if (weight[i] <= j) {
             include = value[i] + dp[i+1][j-weight[i]];
                  } 
           int exclude = 0 + dp[i+1][j];
            dp[i][j] = max(include,exclude);
                                }

                }
        return dp[0][maxWeight];

}
//better space complexity n^2 => 2*n
int solve4(vector<int> weight,vector<int> value,int n,int maxWeight){
    // vector<vector<int>> dp(n,vector<int>(maxWeight+1,0));
    vector<int> next(maxWeight+1,0);
    vector<int> curr(maxWeight+1,0);

        int x = n-1;
                for (int i = weight[x]; i <= maxWeight; i++) {
           next[i] = value[x]; 
        }


                for (int i = n-2; i >= 0; i--) {
                for (int j = 1; j <= maxWeight; j++) {
          int include = 0;
                  if (weight[i] <= j) {
             include = value[i] + next[j-weight[i]];
                  } 
           int exclude = 0 + next[j];
            curr[j] = max(include,exclude);
                                }
        next = curr;
                }
        return next[maxWeight];

}
//even better space complexity 2*n => n
int solve5(vector<int> weight,vector<int> value,int n,int maxWeight){
    // vector<vector<int>> dp(n,vector<int>(maxWeight+1,0));
    // vector<int> next(maxWeight+1,0);
    vector<int> curr(maxWeight+1,0);

        int x = n-1;
                for (int i = weight[x]; i <= maxWeight; i++) {
           curr[i] = value[x]; 
        }


                for (int i = n-2; i >= 0; i--) {
                for (int j = maxWeight; j >=1; j--) {
          int include = 0;
                  if (weight[i] <= j) {
             include = value[i] + curr[j-weight[i]];
                  } 
           int exclude = 0 + curr[j];
            curr[j] = max(include,exclude);
                                }

                }
        return curr[maxWeight];

}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
  // int ans = solve(weight,value,0,maxWeight);
  // vector<vector<int>> dp(n+1,vector<int>(maxWeight+1,-1));
  // int ans = solve2(weight,value,0,maxWeight,dp);
    int ans = solve5(weight,value,n,maxWeight);

  return ans;
}