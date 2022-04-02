#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n],arr1[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
    arr1[n-1-i]=arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout<<arr1[i]<<" ";
  }

  return 0;
}