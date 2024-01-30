class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();++i)
        {
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/")
            {
                int first = st.top(); st.pop();
                int second = st.top(); st.pop();
                int res;
                if(tokens[i]=="+") res = first + second;
                else if(tokens[i]=="-") res = second - first;
                else if(tokens[i]=="*") res = second * first;
                else if(tokens[i]=="/") res = second / first;
                st.push(res);
            }
                
            else
                st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};