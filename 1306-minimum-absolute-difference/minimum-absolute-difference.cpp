class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        if(n<2) return {};
        sort(arr.begin(),arr.end());
        int min_dif=INT_MAX;
         vector<vector<int>> ans;
        for(int i=0;i<n-1;i++){
          int diff=arr[i+1]-arr[i];
          if(diff<min_dif){
            min_dif =diff;
            ans.clear();          
          }
          if(diff==min_dif){
             ans.push_back({arr[i],arr[i+1]});
          }
        }
        return ans;
    }
};