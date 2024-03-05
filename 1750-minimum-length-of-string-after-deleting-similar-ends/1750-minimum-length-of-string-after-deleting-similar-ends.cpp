class Solution {
public:
    int minimumLength(string s) {
        int l =0, r=s.size()-1;
        while(l<r){
            // cout<<l<<" "<<r<<endl;
            char same;
            if(s[l] == s[r])
                same = s[l];
            else break;
            while(l<=r &&(s[l]==same || s[r]==same)){
                if(s[l]==same){
                    s[l] = 'x';
                    l++;
                }
                    
                if(s[r]==same){
                    s[r] = 'y';
                    r--;
                }
                    
            }
        }
        return r-l+1;
    }
    
    //"cab aaaaaaaa abac"
    // xxxxyyyy
};