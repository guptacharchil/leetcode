#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;
int solve(string s,int i,int n,vector<int> dp)
{
        if(s[i]=='0')
    {
        dp[i]=0;
        return 0;
    }

  if(i==n-1)
  return 1;
  if(i>=n)
  return 1;
if(dp[i]!=INT_MIN)
  return dp[i];
   int ans=0;

  ans+=solve(s,i+1,n,dp);
  dp[i]=ans;
  string x=s.substr(i,2);
  if(x.compare("27")<0)
  {
  //  cout<<"asfa";
  ans+=solve(s,i+2,n,dp);
  dp[i]=ans;
}
  return ans;
}
int main()
{

  string x="4757562545844617494555774581341211511296816786586787755257741178599337186486723247528324612117156948";
std::vector<int> v(x.length(),INT_MIN);
  cout<<solve(x,0,x.length(),v);
}
