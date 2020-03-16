#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> dailyTemperatures(vector<int>& v)
{

stack<int> s;

int n=v.size();
std::vector<int> ans(n,0);
s.push(0);
for(int i=1;i<n;i++)
{
while(!s.size()==0&&v[s.top()]<v[i])
{
//  ans.push_back(v[i]-v[s.top()]);
ans[s.top()]=v[i]-v[s.top()];
  s.pop();
//  cout<<"charchil";
}
s.push(i);
}
return ans;
}
int main()
{
  std::vector<int> v={73,74,75,71,69,72,76,73};
  std::vector<int> v1=dailyTemperatures(v);
  for(int i:v1)
  cout<<i<<" ";
}
