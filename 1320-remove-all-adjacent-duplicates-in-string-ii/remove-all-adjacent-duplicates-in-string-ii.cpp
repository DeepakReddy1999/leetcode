class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        int n=s.size();
        int i=0;
        while(i < n){
            if(st.empty()){
                st.push({s[i],1});
            }else{
                if(st.top().first==s[i]){
                    auto top=st.top();
                    st.pop();
                    st.push({s[i],top.second +1});
                    if(st.top().second==k){
                        st.pop();
                    }
                }else{
                    st.push({s[i],1});
                }
            }
            i++;
        }
        string ans="";
        while(!st.empty()){
            auto top=st.top();
            st.pop();
            ans.append(top.second,top.first);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};