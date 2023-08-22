class Solution {
public:
    string convertToTitle(int col) {
        string ans="";
        while(col>0)
        {
            char c = 'A'+(col-1)%26;
            ans=c+ans;
            col=(col-1)/26;
        }
        return ans;
    }
};