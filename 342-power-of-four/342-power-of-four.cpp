class Solution {
public:
    bool solve(int n)
    {
        if(n<4)
            return false;
        if(n==4)
            return true;
        if(n%4==0)
        return solve(n/4);
        return false;
    }
    bool isPowerOfFour(int n) {
        if(n==1)
           return true;
        bool b=solve(n);
        return b;
    }
};