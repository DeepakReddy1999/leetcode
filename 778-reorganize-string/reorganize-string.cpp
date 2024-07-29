class Solution {
public:
    typedef pair<int, char> piv;
    
    string reorganizeString(string s) {
        unordered_map<char, int> mp;
        for (char ele : s) {
            mp[ele]++;
        }

        priority_queue<piv> pq;
        for (auto ele : mp) {
            pq.push({ele.second, ele.first});
        }

        string result = "";
        while (pq.size() > 1) {
            auto top1 = pq.top(); pq.pop();
            auto top2 = pq.top(); pq.pop();
            
            result += top1.second;
            result += top2.second;
            
            if (--top1.first > 0) pq.push(top1);
            if (--top2.first > 0) pq.push(top2);
        }
        
        if (!pq.empty()) {
            if (pq.top().first > 1) return "";
            result += pq.top().second;
        }
        
        return result;
    }
};