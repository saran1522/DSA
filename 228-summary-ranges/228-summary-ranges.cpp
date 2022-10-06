class Solution {
public:
    vector<string> summaryRanges(vector<int>& arr) {
        
        int n = arr.size();
        vector<string> ans; 
        
        for(int i = 0; i < n; i++)
        {
            string temp = "";
            int j = i; 
            
            while(j + 1 < n && arr[j + 1] == arr[j] + 1)
            {
                j++;
            }
            
            if(j > i)
            {
                temp += to_string(arr[i]);
                temp += "->"; 
                temp += to_string(arr[j]); 
            }
            
            else
            {
                temp += to_string(arr[i]); 
            }
            
            ans.push_back(temp);
            i = j; 
        }
        return ans; 
    }
};