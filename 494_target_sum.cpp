#include<iostream>
#include<vector>
#include<climits>
#include<numeric>
using namespace std;
int sum(int i,vector<int> nums,int t,std::vector<int> &dp)
{
  vector<int> v=nums;
  int x=accumulate(nums.begin(),nums.end(),0);
  if(x==t)
  return 1;
  if(i<nums.size())
  {
    if(dp[i]!=INT_MIN)
    return dp[i];
    v[i]=-nums[i];
  //  dp[i]= sum(i+1,nums,t,dp)+sum(i+1,v,t,dp);
return sum(i+1,nums,t,dp)+sum(i+1,v,t,dp);
  }
  return 0;
}
int main()
{
  vector<int> nums={9,7,0,3,9,8,6,5,7,6};
vector<int> dp(nums.size(),INT_MIN);
  cout<<sum(0,nums,2,dp);
}
