class Solution {
public:
    void solve(vector<int>& nums,vector <int> &set,vector<vector<int>> &ans,vector<bool> &used){
        if(set.size()==nums.size()){
            ans.push_back(set);
            return;
        }

        for(int i=0;i<nums.size();i++){
             if(!used[i]){
                used[i]=true;
                set.push_back(nums[i]);
                solve(nums,set,ans,used);
                used[i]=false;
                set.pop_back();
             }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> >ans;
        vector<bool> used(nums.size(),false);
        vector<int> set;
        solve(nums,set,ans,used);
        return ans;
    }
};