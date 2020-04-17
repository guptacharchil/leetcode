#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>>& v,int i,int j,int n,int m,vector<vector<int>>& dp)
{
if(dp[i][j]!=INT_MIN)
return dp[i][j];

  if(i==n-1)
  return v[i][j];
int b=solve(v,i+1,j,n,m,dp);
  if(j-1>=0)
   b=min(b,solve(v,i+1,j-1,n,m,dp));

  if(j+1<n)
   b=min(b,solve(v,i+1,j+1,n,m,dp));

  dp[i][j]= v[i][j]+b;
return dp[i][j];
}

int minFallingPathSum(vector<vector<int>>& v) {
int n=v.size();
int m=v[0].size();
int res=INT_MAX;
vector<vector<int>> dp(n,vector<int>(m,INT_MIN));
for(int i=0;i<m;i++){
  //cout<<solve(v,0,i,n,m)<<endl;
res=min(res,solve(v,0,i,n,m,dp));
}
return res;
}
int main()
{
  vector<vector<int>> a={{1,2,3},{4,5,6},{7,8,9}};
  cout<<minFallingPathSum(a);
}
