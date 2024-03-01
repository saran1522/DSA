class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans = "";
        int j=0;
        for(int i=0;i<s.size() ; ++i){
            if(s[i]== '1'){
                ans.push_back('1');
                j++;
            }
        }
        int lastOne = j-1;
        while(j<s.size()){
            ans.push_back('0');
            j++;
        }
            
        swap(ans[lastOne],ans[j-1]);
        return ans;
    }
};