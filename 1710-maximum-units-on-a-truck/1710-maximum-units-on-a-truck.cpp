class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int truck) {
         sort(box.begin(), box.end(), [](auto& a, auto& b) { return b[1] < a[1];});
        int ans = 0;
        for (auto& b : box) {
            int count = min(b[0], truck);
            ans += count * b[1], truck -= count;
			if (!truck) return ans;
        }
        return ans;
    }
};