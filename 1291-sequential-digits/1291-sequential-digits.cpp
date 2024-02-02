class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        int lim = 11, num = 12, comp=12, i=3;
        while(comp <= high)
        {
            if(comp>=low && comp<=high)
                ans.push_back(comp);
            comp += lim;
            if(comp%10 == 0){
                lim = lim*10 +1;
                num = num*10+i;
                comp = num;
                i++;
            }
                
        }
        return ans;
    }
};