#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int max(int a,int b)
{
  return (a>b)?a:b;
}
int solve(int n,int k,vector<vector<int>> &dp)
{
  if(dp[n][k]!=-1)
  return dp[n][k];

    if(k==1||k==0)
        return k;
    if(n==1)
        return k;
    int mn=INT_MAX;
    int x,res;
    for(x=1;x<=k;x++)
    {
        res=max(solve(n-1,x-1,dp),solve(n,k-x,dp));
        dp[n][k]=res;
        if(res<mn)
            mn=res;
    }
    return mn+1;
}
int superEggDrop(int n, int k) {
  vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
  return solve(n,k,dp);
}
int main()
{
  cout<<superEggDrop(2,1);
}
