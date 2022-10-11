class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int smallest=INT_MAX,smaller=INT_MAX;
        for(int i:nums)
        {
            if(i<=smallest)
                smallest=i;
            else if(i<=smaller)
                smaller=i;
            else
                return true;
        }
        return false;
    }
};