class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        // approach 1 
        // make an ans string; insert all 1s initially in ans
        // then start inserting 0s in ans till s.size()-1
        // them swap the last 1 and 0 at the end of the ans string
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
        
        // approach 2
        // count 0s and 1s in s
        // insert 1s in ans string till oneCnt -1 (1 for the last position)
        // insert 0s in ans string till zCnt==0
        // insert remaining 1 in the ans string
        //
        // int oneCnt =0, zCnt=0;
        // for(char &c:s){
        //     if(c=='0')
        //         zCnt++;
        //     else
        //         oneCnt++;
        // }
        // s="";
        // while(oneCnt>1){
        //     s.push_back('1');
        //     oneCnt--;
        // }
        // while(zCnt--){
        //     s.push_back('0');
        // }
        // s.push_back('1');
        // return s;
    }
};