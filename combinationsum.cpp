#include<bits/stdc++.h>
using namespace std;
void findSum(vector<int>& v,vector<vector<int>>& res,vector<int>& r,int sum,int i)
{
if(sum==0)
res.push_back(r);
if(sum<0)
return;
while(i<v.size()&&v[i]<=sum)
{
  r.push_back(v[i]);
  findSum(v,res,r,sum-v[i],i);
  i++;
  r.pop_back();
}
}

vector<vector<int>> combinationSum(vector<int>& v, int target) {
    std::vector<vector<int>> res;
    vector<int> r;
    sort(v.begin(),v.end());
  findSum(v,res,r,target,0);

}
int main()
{
  std::vector<int> v;
  v.push_back(2);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);
  combinationSum(v,7);

}
