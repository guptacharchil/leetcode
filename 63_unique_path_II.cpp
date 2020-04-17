#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> &v,int n,int m,int i,int j)
{
  int sum=0;
  if(i==n-1&&j==m-1)
  return 1;
  if(v[i][j]==1)
  return 0;
  if(i+1<n)
  sum+=solve(v,n,m,i+1,j);
  if(j+1<m)
  sum+=solve(v,n,m,i,j+1);
  return sum;
}
int main()
{

  vector<vector<int>> v={{0,1,0},{1,1,0},{0,0,0}};

  cout<<solve(v,v.size(),v[0].size(),0,0);
}
