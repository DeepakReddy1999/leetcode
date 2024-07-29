class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n=strs.size();
        unordered_map<string,vector<string>> mp;
        for(const string& str:strs){
            array<int,26> count={0};
            for(char c:str){
              count[c-'a']++;
            }
            string key;

            for(int i=0;i<26;i++){
                key+=string(count[i],i+'a');
            }

            mp[key].push_back(str);

        }
        for(auto& it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};