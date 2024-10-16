class Solution {
public:
    void solve(string digits,string temp,int i, vector<string>&ans,string mapping[]){
        if(i>=digits.length()){
            ans.push_back(temp);
            return;
        }

        int num=digits[i]-'0';
        string value= mapping[num];

        for(int j=0;j<value.length();j++){
            temp.push_back(value[j]);
            solve(digits,temp,i+1,ans,mapping);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size()==0) return ans;
        int n=digits.size();
        int i=0;
        string temp;
        string mapping[10] = {"",    "",    "abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits,temp,i,ans,mapping);
        return ans;
    }
};