#define MOD 1000000007
#include <vector>
//Recursion
long long int solve1(int n) {
    if(n==1) return 0;
    if(n==2) return 1;
    int ans = (n-1)%MOD * ( solve1(n-1)%MOD + solve1(n-2)%MOD );
    return ans;
}

//DP1 Top Down 
long long int solve2(int n, vector<long long int> &dp) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (dp[n] != -1) return dp[n];
    dp[n] = ((n - 1) % MOD) * ((solve2(n - 1, dp) % MOD) + (solve2(n - 2, dp) % MOD)) % MOD;
    return dp[n];
}
//DP2 Bottom Up Tabulation
long long int solve3(int n) {
    vector<long long int> dp(n+1, -1);

    dp[1] = 0;
    dp[2] = 1;
    for (int i = 3; i <= n; i++) {
        long long int first = dp[i-1] %MOD;
        long long int second = dp[i-2] % MOD;
        long long int sum = (first+second) % MOD;
        long long int ans = ((i-1)*sum)%MOD;
        dp[i] = ans;

    }

    return dp[n];
}
//DP Constant Space Complexity
long long int solve4(int n) {
    // vector<long long int> dp(n+1, -1);
    long long int first = 0;
    long long int second = 1;

    // dp[1] = 0;
    // dp[2] = 1;
    for (int i = 3; i <= n; i++) {

        long long int f = first %MOD;
        long long int s = second % MOD;
        long long int sum = (f+s) % MOD;
        long long int ans = ((i-1)*sum)%MOD;
        first=second;
        second=ans;

    }

    return second;
}

long long int countDerangements(int n) {
    vector<long long int> dp(n + 1, -1); // Note: dp should be of size n+1
    long long int ans = solve3(n);
    return ans;
}