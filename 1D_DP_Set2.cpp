#include<iostream>
#include<vector>
using namespace std;
// Question 1
    vector<vector<int>> generate(int n) {
        vector<vector<int>>dp(n);
        for(int i=0;i<n;i++){
            dp[i].resize(i+1);
            dp[i][0]=1;
            dp[i][i]=1;
            for(int j=1;j<i;j++){
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            }
        }
        return dp;
    }

// Question 2
    vector<int> getRow(int n) {
        vector<vector<int>>dp(n+1);
        for(int i=0;i<=n;i++){
            dp[i].resize(i+1);
            dp[i][0]=1;
            dp[i][i]=1;
            for(int j=1;j<i;j++){
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            }
        }
        return dp[n];
    }

// Question 3
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=prices[0];
       vector<int>dp(n,0);
       dp[0]=0;
       for(int i=1;i<n;i++){
          dp[i]=max(dp[i-1],(prices[i]-mini));
          mini=min(mini,prices[i]);
       }
       return dp[n-1];
    }

// Question 4
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>ans;
        int i = 0, n = words.size();
        while(i<n){
            ans.push_back(words[i]);
            while(i<n-1 and groups[i] == groups[i+1])i++;
            i++;
        }
        return ans;
    }

// Question 5
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for (int x : nums)
            total += x;
        int leftSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int rightSum = total - leftSum - nums[i];
            if (leftSum == rightSum)
                return i;
            leftSum += nums[i];
        }
        return -1;
    }

// Question 6
    bool canWinNim(int n) {
        return n%4;
    }

// Question 7
    int numberOfMatches(int n) {
        return n-1;
    }

// Question 8
    