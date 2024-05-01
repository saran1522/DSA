class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind = 0, i=0;
        ind = word.find(ch);
        if(ind == -1)
            return word;
        while(i<ind){
            swap(word[i++], word[ind--]);
        }
        return word;
    }
};