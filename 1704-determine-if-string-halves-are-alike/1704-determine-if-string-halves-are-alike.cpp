class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        
        int a_vowal=0,b_vowal=0;
        for(int i=0;i<n;++i)
        {
            if(i<n/2)
            {
             if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
                s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                 a_vowal++;
            }
            else
            {
             if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
                s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                 b_vowal++;
            }
            
        }
        return a_vowal==b_vowal;
    }
};