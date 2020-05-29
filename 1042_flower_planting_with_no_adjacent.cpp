#include<bits/stdc++.h>
using namespace std;

void add(int a,int b,map<int,vector<int>> &adj)
{
  adj[a].push_back(b);
  adj[b].push_back(a);

}
vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {
map<int,vector<int>> adj;
for(int i=0;i<paths.size();i++)
{
  add(paths[i][0]-1,paths[i][1]-1,adj);
}
vector<int> ans(N,0);

for(int i=0;i<N;i++)
{
  vector<int> tem(5,0);
  vector<int> v=adj[i];
  for(int j:v)
  {
    tem[ans[j]]=1;
  }
  for(int k=4;k>0;k--)
  if(tem[k]==0)
  ans[i]=k;
}

    return ans;
}
int main()
{
  vector<vector<int>> aa={};
  vector<int> a=gardenNoAdj(1,aa);
for(int i:a)
cout<<i<<" ";
}
