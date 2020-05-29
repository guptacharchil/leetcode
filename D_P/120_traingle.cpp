#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>>& v,int i,int n,int j,vector<vector<int>>& dp)
{
  if(i==n)
  return 0;
  if(i==n-1)
  return v[i][j];
  if(dp[i][j]!=INT_MAX)
  return dp[i][j];
  return dp[i][j]=v[i][j]+min(solve(v,i+1,n,j,dp),solve(v,i+1,n,j+1,dp));

}
int minimumTotal(vector<vector<int>>& t) {

vector<vector<int>> v(t.size(),vector<int>(t.size(),INT_MAX));

return solve(t,0,t.size(),0,v);
}
int main()
{

  vector<vector<int>> v={{2},{3,4},{6,5,7},{4,1,8,3}};

  cout<<minimumTotal(v);
}
