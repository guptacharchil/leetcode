#include<bits/stdc++.h>
using namespace std;
void findSum(vector<int> &v,vector<int> &r,vector<vector<int>> &res,int sum,int i)
{
  if(sum<0)
  return;
  if(sum==0)
  res.push_back(r);
  while(i<v.size()&&v[i]<=sum)
  {
    r.push_back(v[i]);
    findSum(v,r,res,sum-v[i],i+1);
    while(v[i]==v[i+1]&&i+1<v.size())
    {
      i++;
    }
    i++;
    r.pop_back();
  }
}
vector<vector<int>> combinationSum2(vector<int>& v, int target) {
std::vector<int> r;
vector<vector<int>> res;
sort(v.begin(),v.end());
findSum(v,r,res,target,0);
return res;

}
int main()
{
  std::vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(2);
  v.push_back(2);
  v.push_back(5);



vector<vector<int>> res=  combinationSum2(v,2);
for(int i=0;i<res.size();i++)
{
  for(int k=0;k<res[i].size();k++)
  cout<<res[i][k]<<"   ";
  cout<<endl;
}

}
