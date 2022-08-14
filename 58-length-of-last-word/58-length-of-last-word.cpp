class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0,ans=0;
        for(int i=0;i<s.size();++i){
            if(s[i]!=' ')
                cnt++;
            if(s[i]==' '|| i==s.size()-1)
            {
                if(cnt>0)
                ans=cnt;
                cnt=0;
            }
        }
        return ans;
    }
};