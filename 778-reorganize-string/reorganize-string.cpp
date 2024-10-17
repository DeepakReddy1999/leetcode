class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it:mp){
            pq.push({it.second,it.first});

        }
        string ans="";
        while(pq.size()>=2){
            auto top1=pq.top();
            pq.pop();
            ans+=top1.second;
            top1.first=top1.first-1;
            auto top2=pq.top();
            pq.pop();
            ans+=top2.second;
            top2.first=top2.first-1;
            if(top1.first!=0){
                pq.push(top1);
            }
            if(top2.first!=0){
                pq.push(top2);
            }

        }
        if(!pq.empty()){
           if(pq.top().first >1){
            return "";
           }else{
            ans+=pq.top().second;
           }
        }
        return ans;
    }
};