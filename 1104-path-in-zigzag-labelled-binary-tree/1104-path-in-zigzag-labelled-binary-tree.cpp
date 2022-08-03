class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        vector<int> result;
        result.push_back(label); 
        int height=log2(label); 
        while(height!=0){
            int left=pow(2,height-1);
            int right=pow(2,height)-1;
            
            label=left+(right-label/2);
            result.insert(result.begin(),label);  
            height--;
        }        
        return result;
    }
};