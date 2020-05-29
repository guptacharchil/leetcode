#include<bits/stdc++.h>
using namespace std;
bool validate(vector<int> seq,int a,int b)
{
int p,q;
for(int i=0;i<seq.size();i++)
{
  if(a==seq[i])
  p=i;
  if(b==seq[i])
  q=i;
}
return p>q;
}
void topo(int i,vector<int> &visited,map<int,vector<int>> &adj,stack<int> &st)
{
  visited[i]=true;
  for(int j:adj[i])
  {
    if(visited[j]==false)
    {
      topo(j,visited,adj,st);
    }
  }
  st.push(i);
}
bool canFinish(int n, vector<vector<int>>& courses) {
    map<int,vector<int>> adj;
    stack<int> st;
    for(int i=0;i<courses.size();i++)
    {
      adj[courses[i][1]].push_back(courses[i][0]);
    }
    vector<int> visited(n,0);
    for(int i=0;i<n;i++)
    {
      if(visited[i]==false)
      {
        topo(i,visited,adj,st);
      }

    }
  vector<int> seq;
  while(!st.empty())
  {
    cout<<st.top()<<"\n";
    seq.push_back(st.top());
    st.pop();
  }
  for(int i=0;i<courses.size();i++)
  {
    if(!validate(seq,courses[i][0],courses[i][1]))
    return false;
  }

  return true;
}
int main()
{
  vector<vector<int>> c={{0,1},{0,2},{1,2}};
  cout<<canFinish(3,c);
}
