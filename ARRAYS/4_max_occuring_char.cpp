#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        char c;
        int arr[25]={0};
        for(int i=0;i<str.length();i++)
           {
               int a=str[i]-'a';
               arr[a]++;
           }
        int maxi=arr[0];
        for(int i=0;i<26;i++){
           maxi=max(maxi,arr[i]);
           if(arr[i]==maxi)
            c=i+'a';
        }
      return c;
    }
};