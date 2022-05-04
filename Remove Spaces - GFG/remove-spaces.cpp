// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string modify (string s)
    {
        int i=0,j=0;
        for(int i=0;i<s.length();i++)
         {
             if(s[i]!=' ')
              s[j++]=s[i];
         }
        int n=s.length()-1;
        while(n>=j){
          s.pop_back();
          n--;
        }
         return s;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends