#include<iostream>
#include<vector>
using namespace std;
// Question 1
    int fib(int n) {
        vector<int>dp(n);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n-1];
    }

// Question 2
    int tribonacci(int n) {
        vector<int>dp(n+1,0);
        if(n==0)return 0;
        if(n==1 || n==2) return 1;
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
    }

// Question 3
    int climbStairs(int n) {
        vector<int>dp(n+1);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }

// Question 4
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n);
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }

// Question 5
    bool divisorGame(int n) {
        vector<int>dp(n+1,0);
        for(int i=1;i<=n;i++){
            if(i%2==0){
                dp[i]=1;
            }
        }
        return dp[n]==1;
    }

// Question 6
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,0);
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            dp[i]=dp[i-1]+nums[i];           
        }
        return dp;       
    }

// Question 7
    vector<int>dp;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        dp.resize(n+1);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            dp[i]=dp[i-1]+nums[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        return dp[right+1]-dp[left];
    }

// Question 8
    vector<int> countBits(int n) {
        vector<int>dp(n+1);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            dp[i]= dp[i>>1]+(i&1);
        }
        return dp;
    }

// Question 9
    bool isSubsequence(string s, string t) {
        int n=t.size();
        int m=s.size();
        vector<vector<bool>>dp (m+1,vector<bool>(n+1,false));
        for(int j=0;j<=n;j++){
            dp[0][j]=true;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    dp[i][j]=dp[i][j-1];
                }
            }
        }
        return dp[m][n];
    }

// Question 10
    int getMaximumGenerated(int n) {
        if(n==0) return 0;
        vector<int>dp(n+1);
        dp[0]=0;
        dp[1]=1;
        int maxi=1;
        for(int i =1;2*i<=n;i++){
            dp[2*i] =dp[i];
            maxi= max(maxi,dp[2*i]);
            if(2*i+1<=n){
                dp[2*i+1]=dp[i]+dp[i+1];
                maxi= max(maxi,dp[2*i+1]);
            }
        }
        return maxi;
    }


