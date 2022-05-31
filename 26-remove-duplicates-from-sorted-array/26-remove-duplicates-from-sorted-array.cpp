class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        /*if(n==1)
            return 1;
       int size=0,j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=nums[j])
            {
                nums[size]=nums[j];
                j=i;
                size++;
            }
            if(i==n-1)
                nums[size]=nums[i];
        }
        return size+1;*/
        if(n==1)
            return n;
        int size=0,j=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[size])
            {
                nums[j++]=nums[i];
                size++;
            }
        }
        size++;
        return size;
    }
};