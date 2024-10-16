class Solution {
public:

    void solve (vector<vector<int>>&ans,vector<int> temp,int n,int k,int start){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<=n;i++){
            temp.push_back(i);
            solve(ans,temp,n,k,i+1);
            temp.pop_back();
        }


    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        int start=1;
        solve(ans,temp,n,k,start);
        return ans;
    }
};