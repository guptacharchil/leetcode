#include<bits/stdc++.h>
using namespace std;
mmap<int,vector<pair<int,int>>> adj;
typedef pair<int,int> pii;
int networkDelayTime(vector<vector<int>>& times, int N, int K) {
  for(int i=0;i<times.size();i++)
  {
    adj[times[i][0]].push_back(make_pair(times[i][1],times[i][2]));
  }
  vector<int> d(N+1,999999);
  priority_queue<pii,vector<pii>,greater<pii>> pq;
  pq.push(make_pair(0,K));
    d[K]=0;
  while(!pq.empty())
  {
    int u,v,w;
    pii p=pq.top();
    pq.pop();
    u=p.second;
    for(auto i:adj[u])
    {
    v=i.first;
    w=i.second;
    if(d[v]>d[u]+w)
    {
      d[v]=d[u]+w;
      pq.emplace(d[v], v);
    }

    }
  }
  int ans=*max_element(d.begin()+1,d.end());
  return ans==999999?-1:ans;
}
int main()
{
vector<vector<int>> t={{1,2,1},{2,3,2},{1,3,2}};
cout<<networkDelayTime(t,3,1);
}
