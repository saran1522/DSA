class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
		/*int n = triangle.size();
		vector<int>next(n);
		for(int i = n-1; i >= 0; i--) {
			vector<int>curr(n);
			for(int j = i; j >= 0; j--) {
				if(i == n-1)
					curr[j] = triangle[i][j];
				else {
					int up = triangle[i][j] + next[j];
					int up_left = triangle[i][j] + next[j+1];
					curr[j] = min(up, up_left);
				}
			}
			next = curr;
		}
		return next[0];*/
         int n = triangle.size();
        vector<int> vec = triangle[n-1];
        
        for(int i =n-2;i>=0;i--){
            for(int j=0;j<triangle[i].size();j++){
                  vec[j] = triangle[i][j] + min(vec[j],vec[j+1]);        
            }
        }
        return vec[0];
	}
};