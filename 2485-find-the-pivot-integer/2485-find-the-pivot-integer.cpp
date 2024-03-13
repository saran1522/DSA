class Solution {
public:
    // calculate total sum by the formula n*(n+1)/2
    // take m = median of 1 to n 
    // run a loop till m<n
    // in each step calculate left sum till m using same formula
    // calculate right sum by substracting left sum from total sum and adding 'm'
    // return m if they are equal
    // return -1 out of the loop
    // int pivotInteger(int n) {
    //     if(n==1) return 1;
    //     int lSum = 0, rSum = 0;
    //     int tSum = n*(n+1)/2;
    //     int m = n/2;
    //     while(m<n){
    //         int lSum = m*(m+1)/2;
    //         int rSum = tSum - lSum + m;
    //         if(lSum == rSum)
    //             return m;
    //         else m++;
    //     }
    //     return -1;
    // }
    
    int pivotInteger(int n) {
        int sum = n * (n + 1) / 2, x = sqrt(sum);
        return x * x == sum ? x : -1;
    }
};