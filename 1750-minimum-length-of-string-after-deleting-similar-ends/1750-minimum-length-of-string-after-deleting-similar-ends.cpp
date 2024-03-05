class Solution {
public:
    // start selecting the same characters at both the ends and replace them wiht temp characters (like 'x' & 'y')
    // also do l++ & r-- as s[l] & s[r] are deleted
    // if l becomre greater then r that means indexes are intersected so stop
    // return the r-l + 1
    int minimumLength(string s) {
        int l =0, r=s.size()-1;
        while(l<r){
            char same;
            if(s[l]==s[r])
                same = s[l];
            else break;
            while(s[l]==same && l<=r){
                s[l]='x';
                l++;
            }
                
            while(s[r]==same && l<=r){
                s[r]='y';
                r--;
            }
                
        }
        return r-l+1;
    }
};