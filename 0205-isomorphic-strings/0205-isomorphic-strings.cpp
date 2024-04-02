class Solution {
public:
    bool isIsomorphic(string s, string k) {
        int m_s[256] = {0}, m_k[256] = {0};
        for(int i=0;i<s.size();++i){
            if(m_s[s[i]] != m_k[k[i]]) return false;
            m_s[s[i]] = i+1;
            m_k[k[i]] = i+1;
        }
        return true;
    }
};