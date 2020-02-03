#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& v) {
  std::list<int> a;
     int p=0;//k
     int q=v[0].size()-1;//n
     int r=0;//l
     int s=v.size()-1;//m
     int z=(q+1)*(s+1);
     while(p<=s&&r<=q)
     {

     for(int i=r;i<=q;i++)
     {
       a.push_back(v[p][i]);
     }
     p++;

     for(int i=p;i<=s;i++)
     {
       //cout<<"*";
       a.push_back(v[i][q]);
     }
     q--;

     if(p<=s)
     for(int i=q;i>=r;i--)
     {
       a.push_back(v[s][i]);
     }
     s--;

     if(r<=q)
     for(int i=s;i>=p;i--)
     {
      a.push_back(v[i][r]);
     }
     r++;

   }
  //  return a;
 }
int main()
{
  int n,m;
  cin>>n;
  cin>>m;
  std::vector<vector<int>> v;
  for(int i=0;i<n;i++)
  {  std::vector<int> a;
    for(int j=0;j<m;j++)
    {

      int k;
      cin>>k;
      a.push_back(k);
    }
    v.push_back(a);
 }

    std::vector<int> p=spiralOrder(v);
    for(int i=0;i<p.size();i++)
    {
      cout<<p[i]<<"   ";
    }
}
