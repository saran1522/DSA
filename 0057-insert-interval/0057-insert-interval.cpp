class Solution {
public:
    // first we will insert all the elements of intervals in ans vector till first element of newIn is bigger than the second element of intervals
    // then we will run the loop till the second element of newIn is bigger than or equal to the first element of intervals[i]
    // in each iteration we will modify newIn where 
        // newIn[0] = min(newIn[0], in[i][0]);
        // newIn[1] = max(newIn[1], in[i][1]);
    // at the end of the loop we will get the modified newIn as all merged overlapping intervals
    // then insert that modified newIn in the ans array (outside the loop)
    // then insert the remaining elements of intervals in the ans array
    
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& newIn) {
        vector<vector<int>>ans;
        int i=0, n = in.size();
        while(i<n && newIn[0]>in[i][1])
            ans.push_back(in[i]), i++;
        while(i<n && newIn[1]>=in[i][0])
        {
            newIn[0] = min(newIn[0], in[i][0]);
            newIn[1] = max(newIn[1], in[i][1]);
            i++;
        }
        ans.push_back(newIn);
        while(i<n)
            ans.push_back(in[i]), i++;
        return ans;
    }
};