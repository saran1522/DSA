class Solution {
public:
    string countAndSay(int n, string s){
        if(n==1)
            return s;
        int i=0,j=0,len=s.size();
        string cur="";
        while(i<len){
            j=i;
            while(s[i]==s[j])
                j++;
            cur+=to_string(j-i);
            cur.push_back(s[i]);
            i=j;
        }
       return countAndSay(n-1,cur);
    }
    string countAndSay(int n) {
     string s="1";
        if(n==1)
            return s;
        s=countAndSay(n,s);
        return s;
    }
};