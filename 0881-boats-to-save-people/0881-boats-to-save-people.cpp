class Solution {
public:
    int numRescueBoats(vector<int>& ppl, int limit) {
        sort(ppl.begin(),ppl.end());
        int i =0 , n = ppl.size(), ans=0;
        int j=n-1;
        while(i < j){
            while(ppl[i]+ppl[j]>limit && i<j){
                ans++;
                j--;
            }
            while(ppl[i]+ppl[j]<=limit && i<j){
                ans++;
                i++, j--;
                cout<<i<<" "<<j<<endl;
            }
            if(i==j)
                ans++;
        }
        return ans;
    }
};