class Solution {
public:
    int strStr(string hay, string need) {
        if(need=="")
            return 0;
        return hay.find(need);
    }
};