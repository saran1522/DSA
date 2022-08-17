class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>table={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map<char,string>mp;
        int i=0;
        for(char c='a';c<='z';++i,++c)
            mp[c]=table[i];
        
        for(auto ele:mp)
            cout<<ele.first<<" "<<ele.second<<endl;
        
        set<string>st;
        for(int j=0;j<words.size();++j)
        {
            string s=words[j],ans="";
            for(int k=0;k<s.size();++k)
            {
                ans+=mp[s[k]];
            }
            st.insert(ans);
        }
        return st.size();
    }
};