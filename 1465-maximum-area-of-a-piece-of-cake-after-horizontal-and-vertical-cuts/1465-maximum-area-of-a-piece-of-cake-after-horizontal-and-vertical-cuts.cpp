class Solution {
public:
    int maxArea(int h, int w, vector<int>& hCuts, vector<int>& vCuts) {
        sort(hCuts.begin(),hCuts.end());
        sort(vCuts.begin(),vCuts.end());
        int hsize=hCuts.size()-1;
        int vsize=vCuts.size()-1;
        int hMax=h-hCuts[hsize];
        int vMax=w-vCuts[vsize];
        for(int i=hsize;i>0;--i)
            hMax=max(hMax,hCuts[i]-hCuts[i-1]);
        hMax=max(hMax,hCuts[0]);
        for(int i=vsize;i>0;--i)
            vMax=max(vMax,vCuts[i]-vCuts[i-1]);
        vMax=max(vMax,vCuts[0]);
        int area=((long long)hMax*(long long)vMax)%1000000007;
        return area;
    }
};