class Solution {
    // sort the array on the basis of [0]th elements in increasing order
    // keep track the minimum end(second element of each pair) of pair (in minEnd variable) because all the pairs that have minEnd in between their range, that can be burst by single arrow
    // if at any point the first element of pair is bigger then minEnd that means that baloon is out of the range so shoot the arrow for all previous set (ans++); also set the minEnd equal to the second of that bigger pair means starting a new set of baloons
    // return the ans + 1 (as we have not counter the arrow for last set)
    
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 0, minEnd = INT_MAX;
        sort(points.begin(), points.end());
        for(auto p:points){
            if(p[0]>minEnd){
                ans++;
                minEnd = p[1];
            }
            minEnd = min(minEnd, p[1]);
        }
        return ans + !points.empty();
    }
};