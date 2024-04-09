class Solution {
public:
    int timeRequiredToBuy(vector<int>& tik, int k) {
        int time = 0;
        for(int i=0;i<tik.size();++i){
                if(i<=k)
                    time += min(tik[i],tik[k]);
                else
                    time += min(tik[i],tik[k]-1);
        }
        return time;
    }
};