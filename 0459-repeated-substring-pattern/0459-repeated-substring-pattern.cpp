class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        if(n==1)
            return false;
        string sub="";
        for(int i=0;i<n-1;++i)
        {
            sub.push_back(s[i]);
            if(n%(i+1)==0)
            {
                string str_to_comp="";
                for(int j=1;j<=n/(i+1);++j)
                    str_to_comp+=sub;
                if(str_to_comp==s)
                    return true;
            }
        }
        return false;
    } 
};