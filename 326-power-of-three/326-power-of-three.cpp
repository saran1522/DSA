class Solution {
public:
    bool solve(double n)
    {
        if(n<3)
            return false;
        if(n==3)
            return true;
        return solve(n/3);
    }
    bool isPowerOfThree(int n) {
        if(n==1)
            return true;
        n=(double)n;
        return solve(n);
    }
};