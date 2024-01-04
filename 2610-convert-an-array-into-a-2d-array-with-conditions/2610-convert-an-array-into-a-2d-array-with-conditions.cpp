class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();++i)
            mp[nums[i]]++;
        vector<vector<int>>ans;
        while(!mp.empty())
        {
            vector<int>row;
            int del;
            for(auto it=mp.begin();it!=mp.end();++it)
            {
                cout<<it->first<<" "<<it->second<<endl;
                if(it->second>0){
                    row.push_back(it->first);
                    it->second--;
                }
                if(it->second==0)
                    del = it->first;
            }
            mp.erase(del);
            if(row.size()>0)
            ans.push_back(row);
        }
        return ans;
    }
};