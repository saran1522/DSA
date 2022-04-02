#include<bits/stdc++.h>
using namespace std;
// *********power of a number**********
int power(int n, int m)
{
    if(m==1)
      return n;
    return n*power(n,m-1);
}
int main(){
  int n,m;
  cin>>n>>m;
  cout<<power(n,m);
  return 0;
}