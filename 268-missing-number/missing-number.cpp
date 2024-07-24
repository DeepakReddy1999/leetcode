class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xornum=0;
        int xorsum=0;

        for(int i=0;i<nums.size();i++){
            xornum^=nums[i];

        }
        for(int i=0;i<=nums.size();i++){
            xorsum^=i;
        }

        return xorsum^xornum;
    }
};