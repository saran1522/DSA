class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        int add = 11, base=12, num = 12, i=3;
        while(num <= high)
        {
            if(num>=low && num<=high)
                ans.push_back(num);
            num += add;
            if(num%10 == 0){
                add = add*10 +1;
                base = base*10+i;
                num = base;
                i++;
            }
                
        }
        return ans;
    }
};