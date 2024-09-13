class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
           
            if(mp[nums[i]]<=2){
                cout<<nums[i]<<" :"<<mp[nums[i]]<<endl;
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }
};