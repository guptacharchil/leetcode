#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void dfs(int i,vector<int> &visited,vector<vector<int>>& v)
{
  for(int j=0;j<v[i].size();j++)
  {
//    cout<<j<<" ";
    if(visited[j]==0&&v[i][j]==1)
    {
      cout<<j<<" ";
      visited[j]=1;
    dfs(j,visited,v);
  }
  }
}
int findCircleNum(vector<vector<int>>& v) {
    int c=0;
    int n=v.size();
    vector<int> visited(n,0);
    for(int i=0;i<n;i++)
    {
      if(visited[i]==0)
      {
        dfs(i,visited,v);
        c++;
        cout<<endl;
      }
    }
    return c;
}
int main()
{
vector<vector<int>> a={{1,0,0,1},{0,1,1,0},{0,1,1,1},{1,0,1,1}};
cout<<findCircleNum(a);
}
