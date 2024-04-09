class Solution {
public:
    int timeRequiredToBuy(vector<int>& tik, int k) {
        int time = 0;
        for(int i=0;i<tik.size();++i){
            if(tik[i]<tik[k]){
                time += tik[i];
            }
            else{
                if(i<=k)
                    time += tik[k];
                else
                    time += tik[k]-1;
            }
        }
        return time;
    }
};