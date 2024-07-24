class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_ending_here=0;
        int n=nums.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            max_ending_here+=nums[i];
             ans=max(ans,max_ending_here);
            if(max_ending_here<0){
                max_ending_here=0;
                            }
           
        }
        return ans;
    }
};