class Solution {
public:
    bool isNotVowel(char c){
        if((c!='a'&& c!='e' && c!='i' && c!='o' && c!='u') && (c!='A'&& c!='E' && c!='I' && c!='O' && c!='U'))
            return true;
        else
            return false;
    }
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            while(i<j && isNotVowel(s[i]))
            {
                cout<<s[i]<<" ";
                i++;
            }
            while(j>i && isNotVowel(s[j]))
            {
                cout<<s[i]<<" ";
                j--;
            }
            swap(s[i++],s[j--]);
        }
        return s;
    }
};