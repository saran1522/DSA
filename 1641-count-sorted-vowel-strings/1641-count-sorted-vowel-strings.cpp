class Solution {
public:
    int increment(int &a,int &e,int &i,int &o,int &u,int n)
    {
        if(n==1)
            return a+e+i+o+u;
        a=a+e+i+o+u;
        e=e+i+o+u;
        i=i+o+u;
        o=o+u;
        return increment(a,e,i,o,u,n-1);
    }
    int countVowelStrings(int n) {
        int a=1,e= 1,i=1,o=1,u=1;
       /* for(int j=1;j<n;j++)
        {
            increment(a,e,i,o,u);
        }*/
        return increment(a,e,i,o,u,n);
    }
};