#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& v) {
sort(v.begin(),v.end());
if(v.size()<=1)
return v[0];
int c=1;
for(int i=0;i<v.size()-1;i++)
{
  if(v[i]=v[i+1])
  c++;
  else
  c=0;
  if(c>v.size()/2)
  return v[i];
}
return 0;
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
  cout<<majorityElement(v);

}
