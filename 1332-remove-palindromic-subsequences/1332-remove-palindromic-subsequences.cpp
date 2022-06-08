class Solution {
public:
    
        //Note that a subsequence does not necessarily need to be contiguous.
        //it means we can remove all a in 1 go and b in one go so answer will be 2 
        //and if string is already palindrom than simply we can remove in 1 pass
        int removePalindromeSub(string s) {
            int i=0,j=s.length()-1;
            while(i<j)
            {
                if(s[i++]!=s[j--])
                    return 2;
            }
            return 1;
        }
};