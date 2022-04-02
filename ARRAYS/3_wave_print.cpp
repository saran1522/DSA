#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[100][100],n,m;
  cout<<"enter the no of rows and colums: ";
  cin>>n>>m;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin>>arr[i][j];
    }
    
  }
 cout<<endl;
 int i=0;
 for(int j=0; j<m; j++)
 {
     if (j&1)
     {
       for(i=n-1;i>=0;i--)
          cout<<arr[i][j]<<" ";
     }
     else
     {
       for(i=0;i<n;i++)
          cout<<arr[i][j]<<" ";
     }
     cout<<endl;
     }
  return 0;
 }
 