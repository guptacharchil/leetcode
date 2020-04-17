#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int solve(vector<vector<int>>& a,int n,int m,int i,int j,vector<vector<int>> &dp)
{


  if(i==n-1&&j==m-1)
  return a[i][j];
  if(dp[i][j]!=-1)
  return dp[i][j];
int aa,b;
aa=INT_MAX;
b=INT_MAX;
  if(i+1<n)
  aa=a[i][j]+solve(a,n,m,i+1,j,dp);
  if(j+1<m)
    b=a[i][j]+solve(a,n,m,i,j+1,dp);
    dp[i][j]=min(aa,b);
  //  cout<<i<<"  "<<j<<"  "<<dp[i][j]<<endl;
    return min(aa,b);

}
int minPathSum(vector<vector<int>>& grid) {
int n=grid.size();
int m=grid[0].size();
vector<vector<int>> dp(n,vector<int>(m,-1));

    cout<<solve(grid,n,m,0,0,dp);
  

}
int main()
{
  std::vector<vector<int>> v={{1,3,1},{1,5,1},{4,2,1}};
  minPathSum(v);
}
