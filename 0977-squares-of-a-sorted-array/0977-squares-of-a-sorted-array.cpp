class Solution {
public:
    vector<int>merge(vector<int>& negs, vector<int>& pos){
        vector<int>ans;
        int i =0, j=0;
        while(i<negs.size() && j<pos.size()){
            if(negs[i]>pos[j])
                ans.push_back(pos[j++]);
            else if(negs[i]<=pos[j])
                ans.push_back(negs[i++]);
        }
        while(i<negs.size())
            ans.push_back(negs[i++]);
        while(j<pos.size())
            ans.push_back(pos[j++]);
        return ans;
    }
    vector<int> sortedSquares(vector<int>& nums) {
        int ind=-1;
        for(int i=0;i<nums.size();++i){
            if(nums[i]<0){
                ind++;
            }   
        }
        
        vector<int>negs,pos,ans;
        
        if(ind != -1)
        {
            for(int i=ind; i>=0;--i){
                // cout<<nums[i]<<" ";
                negs.push_back(nums[i]*nums[i]);
            }
        }
        // cout<<endl;
        
        // vector<int>pos;
        for(int i=ind+1;i<nums.size();++i){
            // cout<<nums[i]<<" ";
            pos.push_back(nums[i]*nums[i]);
        }
        
        if(ind != -1)
           ans= merge(negs,pos);
        else ans = pos;
        
        return ans;
        
        
        
//         multiset<int>st;
//         for(auto i:nums)
//             st.insert(i*i);
        
//         nums.clear();
//         for(auto i:st)
//             nums.push_back(i);
        
//         return nums;
       
    }
};