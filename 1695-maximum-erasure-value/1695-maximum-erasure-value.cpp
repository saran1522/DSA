class Solution {
public:
    //sliding window && two pointer
    //make a map of int , int
    //store frequency of every nums[j] and add each element in sum
    //if size of map is less then th size of window(j-i+1) then it means any character is repeating
    //remove all elements before that element 
    //subtract the removed element from the sum
    //return the ans
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0,j=0,sum=0,ans=INT_MIN;
        unordered_map<int,int>m;
        while(j<nums.size())
        {
            m[nums[j]]++;
            if(m.size()<j-i+1)
            {
                while(m.size()<j-i+1)
                {
                    m[nums[i]]--;
                    if(m[nums[i]]==0)
                    {
                        m.erase(nums[i]);
                        sum-=nums[i];
                    }
                    i++;
                }
            }
            else
                sum+=nums[j];
            
            j++;
            ans=max(ans,sum);
        }
        return ans;
    }
};