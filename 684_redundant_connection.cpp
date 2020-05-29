#include<bits/stdc++.h>
using namespace std;
 vector<int> findRedundantConnection(vector<vector<int>>& edges)
{
  set<int> st;

  for(int i=0;i<edges.size();i++)
  {
    int k=st.size();
    st.insert(edges[i][0]);
        st.insert(edges[i][1]);
        if(st.size()==k)
        return {edges[i][0],edges[i][1]};
  }
  return {};
}
int main()
{
  vector<vector<int>> a={{1,2},{2,3},{4,3},{4,1},{5,1}};
  vector<int> x=findRedundantConnection(a);
  for(int i:x)
  cout<<i<<" ";
}
