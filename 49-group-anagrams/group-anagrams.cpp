class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n=strs.size();
        unordered_map<string,vector<string>> ansmap;
        for(string str:strs){
                 vector<int> store(26,0);
                 string res="";
            for(char c: str){
              store[c-'a']++;
            }
            for(int i=0;i<26;i++){
                res.append(store[i],'a'+i);
            }
            ansmap[res].push_back(str);
        }
        for(auto it:ansmap){
            ans.push_back(it.second);
        }
        return ans;
    }
};