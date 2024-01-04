class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size(), m = bank[0].size();
        int ans=0,lastOnesCount=0;
        for(int i=0;i<n;++i)
        {
            int currOnesCount=0;
            for(int j=0;j<m;++j)
            {
                if(bank[i][j]=='1')
                    currOnesCount++;
            }
            if(currOnesCount>0)
            {
                ans += (lastOnesCount * currOnesCount);
                lastOnesCount = currOnesCount;
            }
        }
        return ans;
    }
};