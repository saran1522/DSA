class Solution {
public:
    
    // store the frequence of tasks in a map
    // also calculate the max frequency of task
    // suppose a task 'A' has max freq. = f
    // then it is guaranteed that there will be at least (f-1) * (n+1) intervals
    // suppose "AABAACDAED" so f = 5(for 'A') & n=3 so 'A' can be repeated after every 3 tasks
    // A _ _ _ A _ _ _ A _ _ _ A _ _ _ A|
    // 1       2       3       4       5| => (5-1 = 4)
    // so (5-1) * (3+1) = 16 tasks at least are possible
    // it is because we can fit the less frequencied elements between the 2 occurences of task A (like A B C D A)
    // we are multiplying (n+1) because n is the no of gaps between every occurence of 'A' and +1 for the 'A' itself
    // now it is possible that more than 1 element has max freq. (AAABBBCCC)
    // so we will also iterate over map, and if there is any element with frequency equal to the max freq. then we will add +1 count of it because then the task would be done like ABCABCABC & we are only calculating for first 2 intervals (f-1)
    // at last if task size is greater than the ans that means there are more taks present in tasks which cant be fit between the occurenace of 'A' so in this case, the operations will be equal to the size of tasks
    // so return which one is maximum
    
    int leastInterval(vector<char>& tasks, int n) {
        int ans = 0, mxFreq = 0;
        unordered_map<char, int>mp;
        for(auto &i:tasks){
            mp[i]++;
            mxFreq = max(mxFreq, mp[i]);
        }
        
        ans = (mxFreq -1) * (n+1);
        for(auto i:mp){
            if(i.second == mxFreq)
                ans++;
        }
        ans = max((int)tasks.size(), ans);
        return ans;
    }
};

