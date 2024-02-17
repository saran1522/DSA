class Solution {
public:
    int furthestBuilding(vector<int>& hts, int brks, int lads) {
        priority_queue<int>pq;
        for(int i=0; i<hts.size()-1;++i)
        {
            if(hts[i+1]>hts[i]){
                int d = hts[i+1]-hts[i];
                pq.push(-d);
                if(pq.size()>lads)
                {
                    brks += pq.top();
                    pq.pop();
                }
                if(brks<0)
                    return i;
            }
        }
        return hts.size()-1;
    }
};