class Solution {
public:
    string convert(string s, int nR) {
        if(nR==1)
            return s;
        vector<string>ans(s.size());
        int row=0,inc;
        for(int i=0;i<s.size();++i)
        {
            ans[row].push_back(s[i]);
            if(row==0)
                inc=1;
            if(row==nR-1)
                inc=-1;
            row+=inc;
        }
        string res="";
        for(auto &s:ans)
            res+=s;
        return res;
    }
};