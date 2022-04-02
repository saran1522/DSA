#include<bits/stdc++.h>
using namespace std;
int peak(vector <int>&arr, int n)
{
  int s=0,e=n-1,p;
  while(s<e)
  {
     int m=s+(e-s)/2;
     if(arr[m]<arr[m+1])
       s=m+1;
     else
         e=m;  
  }
  return s;
}
int main(){
  int n;
  cout<<"enter size of array "<<endl;;
  cin>>n;
  vector<int> arr(n);
  cout<<"enter elements"<<endl;
  for (int i = 0; i <n; i++)
  {
     cin>>arr[i];
  }
  cout<<"the index of peak element is "<<peak(arr, n);
  return 0;
}