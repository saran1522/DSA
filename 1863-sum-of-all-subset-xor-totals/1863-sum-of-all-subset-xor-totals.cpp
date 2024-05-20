class Solution {
public:
    void solve(vector<int>& arr, int& grand_total, int xorAns, int i =0){
        if(i == arr.size()){
            grand_total += xorAns;
            return;
        }
        solve(arr, grand_total,xorAns ^ arr[i], i+1);
        solve(arr, grand_total,xorAns, i+1);
    }
public:
    int subsetXORSum(vector<int>& arr) {
        int grand_total = 0;
        int xorAns = 0;
        solve(arr,grand_total,xorAns);
        return grand_total; 
    }
};