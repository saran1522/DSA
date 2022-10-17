class Solution {
public:
    bool checkIfPangram(string str) {
        for(char c='a'; c<='z';++c)
        {
            if(str.find(c)==string::npos)
                return false;
        }
        return true;
    }
};