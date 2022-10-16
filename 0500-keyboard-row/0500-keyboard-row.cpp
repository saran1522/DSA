class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1="QWERTYUIOPqwertyuiop";
        string row2="ASDFGHJKLasdfghjkl";
        string row3="ZXCVBNMzxcvbnm";
        vector<string>ans;
        int a=0,b=0,c=0;
        for(auto word:words)
        {
            for(auto w:word)
            {
                if(row1.find(w)!=string::npos)
                    a++;
                else if(row2.find(w)!=string::npos)
                    b++;
                else if(row3.find(w)!=string::npos)
                    c++;
            }
            if(word.size()==max({a,b,c}))
                ans.push_back(word);
            a=b=c=0;
        }
        return ans;
    }
};