class Solution {
public:
    // first store the characters of s & thier frequencies in a hashmap
    // now all elements in mp has the unique characters in s
    // now traverse on order string from 0 to size-1
    // check if map contains the order[i] in it; if true then add it in ans string mp[order[i]] (freq.) no. of times
    // now we have common characters of s & order in ans string in sorted order
    // now we have to add characters of s which are not in order
    // so traverse on hashmap and check if the it.first is present in ans string or not 
    // if not then add it in ans string in it.second(freq.) no. of times
    // now ans conains the sorted s according to given order
    // return ans
    string customSortString(string order, string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();++i)
            mp[s[i]]++;
        
        string ans = "";
        for(auto &c: order){
            if(mp.find(c) != mp.end()){
                ans.append(mp[c],c);
                mp.erase(c);
            }
        }
       
        for(auto &it:mp)
            ans.append(it.second, it.first);
        
        return ans;
    }
};