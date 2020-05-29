#include<bits/stdc++.h>
using namespace std;
map<string,vector<pair<string,double>>> adj;
void print()
{

  for(auto i:adj)
  {
    cout<<i.first<<" ->";

    for(auto j:i.second)
    {
      cout<<j.first<<"("<<j.second<<")   ";
    }
    cout<<endl;
  }
}
void dfs(vector<string> visited,string d,string s,vector<double> &ans,int pos)
{
//  cout<<"d"<<d<<" ";
visited.push_back(s);
//string x=visited.back();
  //visited.push_back(s);
  //cout<<s<<"  ";
  if(s==d){
cout<<"\n\n";
    for(string xx:visited)
    {

      cout<<xx<<" ";

    }
    cout<<endl;
    double sum=1;
  		for(int i=0;i<visited.size()-1;i++)
  		{
  			for(auto k:adj[visited[i]])
  			{
  				if(visited[i+1]==k.first)
  					sum=sum*k.second;
  			}
        cout<<sum<<" ";
  		}
      cout<<sum<<endl;
      ans[pos]=sum;
  }

  for(auto i:adj[s])
  {
      auto fs=find(visited.begin(),visited.end(),i.first);
      if(fs==visited.end())
      {
          //visited.push_back(i.first);
         dfs(visited,d,i.first,ans,pos);
       }

     }
  //return -1;
  }
double path(string s,string d,vector<double> &ans,int pos)
{
  vector<string> visited;
  //visited.push_back(s);
  if(adj[s].size()==0)
  return -1;
  if(adj[d].size()==0)
  return -1;
   dfs(visited,d,s,ans,pos);

}
vector<double> calcEquation(vector<vector<string>>& eq, vector<double>& values, vector<vector<string>>& q)
{

  vector<double> ans(q.size(),-1);
  for(int i=0;i<eq.size();i++)
  {
    adj[eq[i][0]].push_back(make_pair(eq[i][1],values[i]));
    adj[eq[i][1]].push_back(make_pair(eq[i][0],1/values[i]));
  }
  for(int i=0;i<q.size();i++)
  {

    path(q[i][0],q[i][1],ans,i);
  }


  return ans;

}

int main()
{
vector<vector<string>> eq={{"x1","x2"},{"x2","x3"},{"x3","x4"},{"x4","x5"}};
vector<double> values={3,4,5,6};
vector<vector<string>> q={{"x2","x5"}};//{{"x1","x5"},{"x5","x2"},{"x2","x4"},{"a","a"},{"x2","x9"},{"x1","x3"}};
vector<double> ans=calcEquation(eq,values,q);
for(double i:ans)
cout<<i<<endl;
//
//print();
}
