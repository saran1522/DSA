class Solution {
public:
    int climbStairs(int n) {
        int prev1=0,prev2=1;
        for(int i=1;i<=n;++i)
        {
            prev2=prev1+prev2;
            prev1=prev2-prev1;
        }
        return prev2;
    }
};