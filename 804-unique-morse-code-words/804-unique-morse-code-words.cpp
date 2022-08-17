class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>morse_code={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>st;
        for(auto &w:words)
        {
            string code="";
            for(auto &c:w)
                code+=morse_code[c-'a'];
            st.insert(code);
        }
        return st.size();
    }
};