class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(),nums.end());
        k--;
        while(k--){
            pq.pop();
        }
        return pq.size()!=0?pq.top():-1;
    }
};