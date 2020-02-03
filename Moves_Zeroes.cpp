#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& v) {
int n=v.size();
int c=0;
int j=0;
for(auto i=v.begin();i!=v.end();i++)
{
  if(*i==0)
  {
    v.erase(i);
    c++;
    i--;
  }


}
for(int i=0;i<c;i++)
v.push_back(0);
}
int main()
{
  int cas;
  cin>>cas;
  std::vector<int> v;
  while(cas--)
  {
    int k;
    cin>>k;
    v.push_back(k);
  }
  moveZeroes(v);
  for(int i=0;i<v.size();i++)
  cout<<v[i]<<"  ";
}
