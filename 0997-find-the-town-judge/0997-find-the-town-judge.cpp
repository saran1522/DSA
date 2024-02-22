class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // storing the frequencies in freq array
        // i[1] ++ for counting how many knows that x person 
        // i[0] -- for counting x knows how many persons
        // if the judge known by everyone and he knows no-one
        // ....then its freq must be == n-1 
        // ....(because if x knows no-one then x will never be at i[0]th place...
        // ....hance its freq will never decrease)
        
        if(trust.size()==0 && n==1)
            return 1;        
        vector<int>freq(n+1,0);
        for(auto &i:trust)
        {
            freq[i[0]]--;
            freq[i[1]]++;
        }
        
        for(int i=0;i<freq.size();++i)
            if(freq[i]==n-1) return i;
                
        return -1;
    }
};