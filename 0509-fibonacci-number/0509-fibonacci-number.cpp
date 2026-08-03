class Solution {
public:
    //-Approch-1:- only solving recussion
    int solveUsingRecursion(int n) {
        // base case
        if (n == 0 || n == 1)
            return n;

        int finalans = solveUsingRecursion(n - 1) + solveUsingRecursion(n - 2);
        return finalans;
    }

    // Approach 2:-Top -down
    //-1 DP SOLUTION->  1D Dp array -> n to 0
    int solveUsingMemo(int n, vector<int>& dp) {
        if (n == 0 || n == 1)
            return n;
        // steps-3:- base case ke baad ,check if ans already exist or not
        if (dp[n] != -1) // means ans hai
        {
            return dp[n];
        }

        // steps 2:- dp array me ans store karo and return karo
        dp[n] = solveUsingMemo(n - 1, dp) + solveUsingMemo(n - 2, dp);
        return dp[n];
    }

    // Approch-3:-Bottom -up
    int solveUsingTabulation(int n) {
        // steps 1:-create a dp array -1 dp
        vector<int> dp(n + 1, -1);

        // step 2:-Analyze the base case and the update the array
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        dp[0] = 0;
        dp[1] = 1;

        // step 3:-check the parameter and reverse it and copy or paste
        //  recussion = n sae zero
        //  reverse me = zero sa n

        for (int i = 2; i <= n; i++) {
            // copy or paste
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        // answer return
        return dp[n];
    }

    int fib(int n) {
        // int ans = solveUsingRecursion(n);
        // return ans;

        // steps 1:- create dp array and pass in function
        // vector<int> dp(n + 1, -1);
        // return solveUsingMemo(n, dp);

        return solveUsingTabulation(n);
    }
};
/*
  int solve(int n) {
        if (n == 0 || n == 1)
            return n;
        return solve(n - 1) + solve(n - 2);
    }
    int fib(int n) { return solve(n); }

 ---------------------------------
 int fib(int n) {
        if (n == 1 || n ==0)
            return n;

        int ans = fib(n - 1) + fib(n - 2);
        return ans;
    }*/