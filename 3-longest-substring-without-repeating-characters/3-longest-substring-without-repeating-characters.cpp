class Solution {
public:
    //make a map
    //Run a loop and increment the value corresponding to the key(which is jth character of string (m[s[i]]++))
    //if the map size and window size (j-i+1) is equal then it means all elements in map are diffferent so store it in ans
    //if the window size is bigger means there is any repeating character in map so decrement the value of all the keys before j
    //if value of ith key becomes 0 then remove it
    //increment the window size
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
            return 0;
        if(s.size()==1)
            return 1;
        int i=0,j=0,ans=INT_MIN;
        unordered_map<char,int>m;
        while(j<s.size())
        {
            m[s[j]]++;
            if(m.size()==j-i+1)
                ans=max(ans,j-i+1);
            else if(m.size()<j-i+1)
            {
              while(m.size()<j-i+1)
              {
                m[s[i]]--;
                if(m[s[i]]==0)
                    m.erase(s[i]);
                i++;
              }
            }
            j++;
        }
        return ans;
    }
};