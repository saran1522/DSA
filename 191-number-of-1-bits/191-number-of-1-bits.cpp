class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        while(n>0)
        {
            cnt++;
            n&=(n-1);
            n/=2;
        }
        return cnt;
    }
};