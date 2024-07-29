class Solution {
public:
    int rob(vector<int>& nums) {
        int n= nums.size();
         if(n==1){
            return nums[0];
        }
        int h1=nums[0];
        int h2=nums[1];
        int present=0;
        if(n==2){
            return max(h1,h2);
        }
       
        vector<int> dp(n,0);
        dp[0]=nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(int i=2;i<n;i++){
            
          dp[i]= nums[i]+dp[i-2] > dp[i-1]? nums[i]+dp[i-2] : dp[i-1];
        }
    return dp[n-1];
    }

};