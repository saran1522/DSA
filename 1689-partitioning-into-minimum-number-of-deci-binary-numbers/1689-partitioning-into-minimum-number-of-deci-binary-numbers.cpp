class Solution {
public:
    int minPartitions(string n) {
        auto it= max_element(n.begin(),n.end());
        char c=*it;
        int ans=c-'0';
        return ans;
    }
};