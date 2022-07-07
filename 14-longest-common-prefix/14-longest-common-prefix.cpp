class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int j=0;j<strs[0].size();++j)
        {
            bool b=true;
            for(int i=1;i<strs.size();++i)
            {
                if(strs[i][j]!=strs[i-1][j])
                    b=false;
            }
            if(b)
            ans.push_back(strs[0][j]);
            else
                break;
        }
        return ans;
    }
};