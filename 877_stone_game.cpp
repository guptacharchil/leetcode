#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int abc(vector<int> &v,int s,int n,vector<vector<int>> &v1)
{
  if(s==v.size())
  return 0;
  if(n==0)
  return 0;
  if(s>n)
  return 0;
  if(v1[s][n]!=-1)
  return v1[s][n];
  int a,b,aa,bb,ans,ans1;
  a=v[s]+abc(v,s+2,n,v1);
  b=v[n]+abc(v,s,n-2,v1);
  aa=v[s]+abc(v,s+1,n-1,v1);
  bb=v[n]+abc(v,s+1,n-1,v1);
//  cout<<a<<"  "<<b<<"  "<<aa<<"  "<<bb<<" "<<endl;
  ans1=max(aa,bb);
  ans=max(a,b);
  v1[s][n]=max(ans,ans1);
  return max(ans,ans1);
}
bool stoneGame(vector<int>& piles) {
  int n=piles.size();
  vector<vector<int>> v(n,vector<int>(n,-1));
int ans=abc(piles,0,piles.size()-1,v);
int sum=accumulate(piles.begin(),piles.end(),0);
int ans1=sum-ans;
return ans>ans1;
}
int main()
{
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++)
  cin>>a[i];
  cout<<stoneGame(a);
}
