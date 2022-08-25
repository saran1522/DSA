class Solution {
public:
    bool canConstruct(string rans, string mag) {
        vector<int>ransCount(26,0);
        vector<int>magCount(26,0);
        for(int i=0;i<rans.size();++i)
           ransCount[rans[i]-'a']++;
        for(int i=0;i<mag.size();++i)
            magCount[mag[i]-'a']++;
        for(int i=0;i<ransCount.size();++i)
        {
            if(ransCount[i]>magCount[i])
                return false;
        }
        return true;
    }
    //tc=O(n>m?n:m)
};