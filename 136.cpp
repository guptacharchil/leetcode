#include<bits/stdc++.h>
using namespace std;
vector <int> singleNumber(vector<int>& v) {
int m=0,g=0,g1=0;
for(int i=0;i<v.size();i++)
{
  m=m^v[i];
}
cout<<m<<endl;
m=m & ~(m-1);
cout<<m<<endl;
for(int i=0;i<v.size();i++)
{
  if((v[i]&m)==0)
  g^=v[i];
  else
  g1^=v[i];
}
return {g,g1};
}
int main()
{
  std::vector<int> v;
int cas;
cin>>cas;
while(cas--)
{
  int l;
  cin>>l;
  v.push_back(l);
}
std::vector<int> v1=singleNumber(v);
cout<<v1[0]<<"   "<<v1[1]<<endl;
}
