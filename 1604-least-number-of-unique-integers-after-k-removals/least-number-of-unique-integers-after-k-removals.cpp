class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        if(arr.size()==0) return 0;
        for(int i: arr){
            mp[i]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }

        while(k>0 && !pq.empty()){
          auto it=pq.top();
          if(it.first<=k){
            k-=it.first;
            pq.pop();
          }else{
            return pq.size();
          }
        }
        return pq.size();
    }
};