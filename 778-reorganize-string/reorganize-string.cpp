class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int, char>> pq;
        unordered_map<char, int> mp;

        for (char c : s) mp[c]++;
        
        for (auto it : mp) {
            pq.push({it.second, it.first});
        }

        string ans = "";
        pair<int, char> prev = {-1, '#'};

        while (!pq.empty()) {
            auto curr = pq.top();
            pq.pop();
            ans += curr.second;

            curr.first--;
            if (prev.first > 0) {
                pq.push(prev);
            }
            prev = curr;
        }

        if (ans.length() != s.length()) {
            return "";
        }

        return ans;
    }
};