
class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int,vector<int>,greater<int>> pq1,pq2;
        int n=costs.size();
        long long ans=0;
        for(int i=0;i<candidates;i++){
            pq1.push(costs[i]);
        }
        for(int i=max(candidates,n-candidates);i<n;i++ ){
            pq2.push(costs[i]);
        }
        int left=candidates;
        int right=n-candidates-1;

        for(int i=0;i<k;i++){
           if(!pq1.empty() && (pq2.empty() || pq1.top()<=pq2.top()) ){
            ans+=pq1.top();
            pq1.pop();
            if(left<=right){
              pq1.push(costs[left++]);
            }
           }else{
            ans+=pq2.top();
            pq2.pop();
            if(left<=right){
                pq2.push(costs[right--]);
            }
           }
        }

        return ans;
       
    }
};