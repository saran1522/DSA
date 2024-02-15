class Solution {
public:
        
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int end = nums.size();
        for(int i=0; i<end-2;++i)
        {
            long long bigger = nums[i];
            long long sum = 0;
            for(int j = i+1; j<end;++j)
                sum+=nums[j];
            if(sum>bigger)
                return sum+bigger;
        }
        return -1;
    }
};