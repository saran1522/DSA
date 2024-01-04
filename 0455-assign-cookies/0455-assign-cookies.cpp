class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cont=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        while(i<g.size()&&j<s.size())
        {
            if(s[j]>=g[i])
                cont++, i++;
            j++;
        }
        return cont;
    }
};