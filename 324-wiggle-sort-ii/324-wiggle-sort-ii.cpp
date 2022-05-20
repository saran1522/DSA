class Solution {
public:
    void wiggleSort(vector<int>& nums) {

    sort(nums.begin(),nums.end());
    int n=nums.size();
    int m=n;
    int median ;
    if(n%2==0){
        median=(n/2)-1;
    }else{
        median=n/2;
    }
    if(n%2==0){
        for(int i=median ; i>=0 ; i--){
            n--;
            nums.push_back(nums[i]);
            nums.push_back(nums[n]);
            // n--;
        }
    }else{
        for(int i=median ; i>0 ; i--){
            n--;
            nums.push_back(nums[i]);
            nums.push_back(nums[n]);
        }
       nums.push_back(nums[0]);
    }
    nums.erase(nums.begin(),nums.begin()+m);
}
};