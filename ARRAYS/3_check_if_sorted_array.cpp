#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n)
{
  if(n==0||n==1)
      return true;
  if(arr[0]>arr[1])
     return false;
  bool isSorted = sorted(arr+1,n-1); //arr+1 means passing array from index 1, which will considered from index 0 for next call
  return isSorted;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
       cin>>arr[i];
    bool b= sorted(arr,n);
    if(b==true)
       cout<<"array is sorted";
    else
       cout<<"array is not sorted";
}