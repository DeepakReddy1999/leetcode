class Solution {
public:
    int connectSticks(vector<int>& sticks) {
        int n=sticks.size();
        int ans=0;
        priority_queue<int,vector<int>,greater<int>>pq;

        for(int i:sticks){
            pq.push(i);
        }
        int top1=0,top2=0;
        int temp=0;
        while(pq.size()>1){
        top1=pq.top();
        pq.pop();
        top2=pq.top();
        pq.pop();
        temp=top1+top2;
        ans+=temp;
        pq.push(temp);

        }
        return ans;

    }
};