#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int solve(vector<vector<int>> v,int m,int n,int i,vector<int> &dp)
{
//  if(n<0||m<0)
  //return 0;
  if(i>=v.size())
  return 0;
 if(dp[i]!=INT_MAX)
  return dp[i];
  if(m-v[i][0]>=0&&n-v[i][1]>=0)
  return dp[i]=max(1+solve(v,m-v[i][0],n-v[i][1],i+1,dp),solve(v,m,n,i+1,dp));
  else
  return dp[i]=solve(v,m,n,i+1,dp);
}
int findMaxForm(vector<string>& s, int m, int n) {
  vector<vector<int>> v(s.size(),vector<int>(2,0));
  int na=s.size();
  vector<int> dp(na,INT_MAX);
  for(int i=0;i<s.size();i++)
  {
    int c=0;
    for(int j=0;j<s[i].length();j++)
    {
      if(s[i][j]=='1')
      c++;
    }
  //v.push_back({s[i].length()-c,c});
  v[i][0]=s[i].length()-c;
     v[i][1]=c;
  }
  for(int i=0;i<v.size();i++)
  {
    for(int j=0;j<v[i].size();j++)
    cout<<v[i][j]<<"  ";
    cout<<endl;
  }
  cout<<" \n-----------------------------------------\n";
  return solve(v,m,n,0,dp);
}

int main()
{
  vector<string> s={
"0","11","1000","01","0","101","1","1","1","0","0","0","0","1","0","0110101","0","11","01","00","01111","0011","1","1000","0","11101","1","0","10","0111"
  };
  cout<<findMaxForm(s,9,80);

}
