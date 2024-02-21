class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int cnt = 0;
        while(left!=right){
            right >>= 1;
            left >>= 1;
            cnt++;
        }
            
        
        return right<<cnt;
    }
};