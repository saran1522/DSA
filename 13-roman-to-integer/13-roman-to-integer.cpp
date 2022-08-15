class Solution {
public:
    int chtoint(char c)
    {
        switch(c){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default: 
                return 0;
        }
        
    }
    int romanToInt(string s) {
        int len=s.length();
        int total=0;
        for(int i=0;i<len;i++)
        {
            int val1=chtoint(s[i]);
            int val2=chtoint(s[i+1]);
            if(val1>=val2)
                total+=val1;
            else
                total-=val1;
        }
        return total;
    }
};