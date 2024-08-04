class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>> pr;
        for(int i=0;i<nums1.size();i++){
            pr.push_back({nums2[i],nums1[i]});
        }
        sort(pr.rbegin(),pr.rend());
         priority_queue<int, vector<int>, greater<int>> minHeap;
         long long sum=0;
         long long maxsum=0;
         for(int i=0;i<pr.size();i++){
            int n1=pr[i].second;
            int n2=pr[i].first;
            minHeap.push(n1);
            sum+=n1;
            if(minHeap.size()>k){
                sum-=minHeap.top();
                minHeap.pop();
            }

            if(minHeap.size()==k){
                maxsum=max(maxsum,sum*n2);
            }
         }
         return maxsum;

    }
};