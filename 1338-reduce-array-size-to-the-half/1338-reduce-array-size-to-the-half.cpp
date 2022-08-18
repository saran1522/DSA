class Solution {
public:
    int minSetSize(vector<int>& arr) {
        //cout<<endl;
        unordered_map<int,int>mp;
            for(int i=0;i<arr.size();++i)
               mp[arr[i]]++;
        multiset<int>st;
            for(auto &i:mp)
            {
                //cout<<i.first<<" "<<i.second<<endl;
                st.insert(i.second);
            }
        int cnt=0,sum=0;
        
        for(auto it=st.rbegin();it!=st.rend();++it)
        {
            //cout<<*it<<",";
            sum+=*it;
            //cout<<sum<<" ";
            cnt++;
            if(sum>=arr.size()/2)
                return cnt;
        }
        return cnt;
        
        /*unordered_map<int, int> counter;
        priority_queue<int> q;
        int res = 0, removed = 0;
        
        for (auto a : arr) counter[a]++;
        for (auto c : counter) q.push(c.second);
        
        while (removed < arr.size() / 2) {
            removed += q.top();
            q.pop();
            res++;
        }
        
        return res;*/
    }
};