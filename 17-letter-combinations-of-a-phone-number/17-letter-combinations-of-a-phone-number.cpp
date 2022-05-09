class Solution {
private:
    void solve(string digits,string comb,int ind,string mapping[],vector<string>&ans)
    {
        if(ind>=digits.length())
        {
            ans.push_back(comb);
                return;
        }
        int num=digits[ind]-'0';
        string value=mapping[num];
        for(int i=0;i<value.length();i++)
        {
            comb.push_back(value[i]);
            solve(digits,comb,ind+1,mapping,ans);
            comb.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()<=0)
            return ans;
        string comb="";
        int ind=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,comb,ind,mapping,ans);
        return ans;
    }
};