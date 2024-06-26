class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        map<int,vector<vector<int>>>mp;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            mp[(arr[i+1]-arr[i])].push_back({arr[i],arr[i+1]});
        }
        vector<vector<int>> ans=mp.begin()->second;
    
        return ans;
    }
};