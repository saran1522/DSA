#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
 int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  int mi=arr[0], mx=arr[0];
  for (int i = 2; i < n; i++)
  {
      mi=min(mi,arr[i]);
      mx=max(mx,arr[i]);
  }
  cout<<"min is "<<mi<<" max is "<<mx;
  return 0;
}