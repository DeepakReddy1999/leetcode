class Solution {
public:
    int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
 int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<int> st;
        for (int num : nums) {
            st.push(num);
            while (st.size() > 1) {
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                
                if (gcd(top1, top2) > 1) {
                    st.pop();
                    st.push(lcm(top1, top2));
                } else {
                    st.push(top1);
                    break;
                }
            }
        }
        
        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};