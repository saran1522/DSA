class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string ans = "";
        st.push(s[0]);
        ans.push_back(s[0]);
        
        for(int i=1;i<s.size();++i){
            if(!st.empty() && abs(s[i]-st.top())==32){
                st.pop();
                if(ans.size()>0)
                ans.pop_back();
            }
            else
            {
                st.push(s[i]);
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};