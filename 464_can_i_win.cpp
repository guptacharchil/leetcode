#include<bits/stdc++.h>
using namespace std;

int solve(int n,int d)
{
int k=d-n;
if(k<=0)
return 0;
k=2*k-1;
for(int i=1;i<n;i++)
{
  if(i*i>=k)
  return i;
}
}
int main()
{
  int a,b;
  cin>>a>>b;
  cout<<solve(a,b);
}
