#include<bits/stdc++.h>
using namespace std;
// *********digits in a number**********
int digit(int n)
{
    static int count=1;
    if(n==0)
      return 0;
    return count+digit(n/10);
}
int main()
{
  int n;
  cin>>n;
  cout<<digit(n);
}