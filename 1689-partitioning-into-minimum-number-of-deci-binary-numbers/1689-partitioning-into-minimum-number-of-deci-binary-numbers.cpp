class Solution {
public:
    int minPartitions(string n) {
        char c= *max_element(n.begin(),n.end());
        int ans=c-'0';
        return ans;
    }
};