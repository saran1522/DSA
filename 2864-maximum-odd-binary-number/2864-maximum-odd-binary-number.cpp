class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int oneCnt =0, zCnt=0;
        for(char &c:s){
            if(c=='0')
                zCnt++;
            else
                oneCnt++;
        }
        s="";
        while(oneCnt>1){
            s.push_back('1');
            oneCnt--;
        }
        while(zCnt--){
            s.push_back('0');
        }
        s.push_back('1');
        return s;
    }
};