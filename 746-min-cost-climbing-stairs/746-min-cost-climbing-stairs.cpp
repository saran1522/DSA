class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
      int oneDown = 0, twoDown = 0;
      
      for(int i=2; i<=n; ++i){
        int temp = oneDown;
        oneDown = min(
          oneDown + cost[i-1],
          twoDown + cost[i-2]
        );
        twoDown = temp;
      }
      
      return oneDown;
    }
};