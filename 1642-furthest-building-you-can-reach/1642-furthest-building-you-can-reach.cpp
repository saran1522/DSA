class Solution {
public:
    //calculate the mid 
    //check if we can go to the mid building using all bricks and ladders
    //if we can then check for more building so do lo=mid
    //else check for less buildings so do hi=mid-1
    //if check function simply store the difference of buildings from 1 to mid in an array
    //sort the difference array in decending order so we will use ladders biggest differences of building (i.e. 1 to no of ladders difference )
    //so start loop from ladders to end of difference array and keep subtracting bricks
    //if bricks ended then it is not possible to reach on mid building by using all the ladders and bricks so return false
    //else it is possible so return true
    
    bool check(vector<int> heights, int bricks, int ladders, int mid){
        //store the height differences which are greater than previous one
		vector<int> diff;
        for(int i = 1; i <= mid; i++){
            if(heights[i] > heights[i-1]){
                diff.push_back(heights[i]-heights[i-1]);
            }
        }
		//sort them in decreasing order
		//largest differences can be covered with ladders
		//check for remaining height differences if all of them can be covered or not
        sort(diff.begin(), diff.end(), greater<int>());
        int l = diff.size();
        for(int i = ladders; i < l; i++){
            if(diff[i] > bricks) return false;
            bricks -= diff[i];
        }
        return true;
    }
    
    
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        int lo = 0, hi = n-1;
        while(lo < hi){
            int mid = (lo+hi+1)/2;
            if(check(heights, bricks, ladders, mid)){
                lo = mid;  // if true, then binary search on right half
            }
            else{
                hi = mid-1; // if false, then binary search on left half
            }
        }
        return lo;
        
    }
};