class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int profit=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                profit+=nums[i]-nums[i-1];
            }
        }
        return profit;
    }
};