class Solution {
public:
    void reverse(string &s1)
    {
        int s=0,e=s1.size()-1;
        while(s<e){
            swap(s1[s++],s1[e--]);
        }
    }
    
    string reverseWords(string s) {
        string ans, s1="", s2="";
        for(int i=0;i<s.size();++i){
            if(s[i]==' ')
            {
                reverse(s1);
                s2=s2+s1;
                s2=s2 + " ";
                s1.clear();
            }
            else
            s1.push_back(s[i]);
            
            if(i==s.size()-1)
            {
                reverse(s1);
                s2=s2+s1;
            }
        }
        return s2;
    }
};