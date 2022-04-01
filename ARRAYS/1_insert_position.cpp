#include<bits/stdc++.h>
using namespace std;
int insert(vector<int>&nums, int n, int target)
{
    int s=0,e=n-1,ans=-1;
    while(s<=e)
    {
        int m=s+(e-s)/2;
        if(nums[m]==target)
         return m;
        else if(nums[m]>target)
          {
              ans=m;
              e=m-1;
          }
        else{
            ans=m+1;
            s=m+1;
        }
    }
    return ans;
}
int main(){
    int n,t;
    cout<<"enter size"<<endl;
    cin>>n;
  vector<int>arr(n);
  cout<<"enter the elements"<<endl;
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<"enter element to found"<<endl;
  cin>>t;
 cout<<insert(arr,n,t);
  return 0;
}