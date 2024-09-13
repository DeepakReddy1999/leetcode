class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int num=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                num=nums[i];
                count=1;
                
            }
            else if(nums[i]==num){
             count++;
            }else{
                count--;
            }
        }
        return num;

    }
};