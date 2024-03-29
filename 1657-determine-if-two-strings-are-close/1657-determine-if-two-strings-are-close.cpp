class Solution {
public:
    bool closeStrings(string s1, string s2) {
        
        if(s1.size() != s2.size())
            return false;
        
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        
        for(int i=0; i<s1.size(); ++i)
        {
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        
        for(int i = 0; i<26; ++i)
        {
            if((freq1[i]>0 && freq2[i]==0) || (freq2[i]>0 && freq1[i]==0))
            {
               return false;
            }
        }
        
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        
        return freq1==freq2;
    }
     
};