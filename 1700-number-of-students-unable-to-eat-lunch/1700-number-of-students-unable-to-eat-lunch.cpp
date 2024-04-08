class Solution {
public:
    int countStudents(vector<int>& std, vector<int>& sand) {
        int i=0, j=0, n = sand.size(), not_get =0;
        while(j<n){
            if(std[0]==sand[0]){
                std.erase(std.begin());
                sand.erase(sand.begin());
                j++;
                not_get =0;
            }
            else{
                std.push_back(*std.begin());
                std.erase(std.begin());
                not_get++;
            }
            if(not_get==std.size())
                break;
        }
        return not_get;
    }
};