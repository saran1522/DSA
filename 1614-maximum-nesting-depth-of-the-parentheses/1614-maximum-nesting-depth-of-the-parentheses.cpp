class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, curr = 0;
        for(auto & c: s){
            if(c=='(')
                ans = max(ans, ++curr);
            if(c==')')
                --curr;
        }
        return ans;
    }
};