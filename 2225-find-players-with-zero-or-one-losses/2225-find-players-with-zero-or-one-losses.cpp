class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& mat) {
        
        vector<int>noLost;
        vector<int>oneLost;
        unordered_map<int,int>lost, wins;

        for(int i =0; i<mat.size();++i)
        {
            wins[mat[i][0]]++;
            lost[mat[i][1]]++;
        }
        
        for(auto &it:lost)
        {
            if(it.second==1)
                oneLost.emplace_back(it.first);
        }
        
        for(auto &it:wins)
        {
            if(lost.find(it.first)==lost.end())
                noLost.emplace_back(it.first);
        }
        
        sort(noLost.begin(), noLost.end());
        sort(oneLost.begin(), oneLost.end());
        
        return {noLost, oneLost};
    }
};