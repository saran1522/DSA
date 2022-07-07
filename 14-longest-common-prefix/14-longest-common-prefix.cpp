class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        if(str.size()==1)
            return str[0];
        string ans="";
        sort(str.begin(),str.end());
        string first=str[0];
        string last=str[str.size()-1];
        for(int j=0;j<first.size();++j)
        {
            if(first[j]==last[j])
                ans.push_back(first[j]);
            else
                break;
        }
        return ans;
    }
};