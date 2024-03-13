class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        int l= 1, r = n, lSum = 0, rSum = n;
        int tSum = n*(n+1)/2;
        int m = l+(r-l)/2;
        while(m<n){
            int lSum = m*(m+1)/2;
            int rSum = tSum - lSum + m;
            if(lSum == rSum)
                return m;
            else m++;
        }
        return -1;
    }
};