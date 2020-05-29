#include<iostream>
#include<vector>
using namespace std;

vector<int> xxor(vector<int>& v)
{
  vector<int> a;
  a.push_back(0);
  for(int i:v)
  a.push_back(i);
  for(int i=1;i<a.size();i++)n
  a[i]=a[i-1]^a[i];
  return a;
}
int countTriplets(vector<int>& v) {
  vector<int>a=xxor(v);
int n=v.size();
int c=0;
for(int i=0;i<n;i++)
{
  for(int j=i+1;j<n;j++)
  {
    for(int k=j;k<n;k++)
    {
      if((a[i]^a[j])==(a[j]^a[k+1]))
      {
      c++;
    //  cout<<i<<" "<<j<<" "<<k<<endl;
    }

  }
  }
}
    return c;
}
int main()
{
int cas;
cin>>cas;
while(cas--)
{
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
  cin>>v[i];
  cout<<countTriplets(v)<<endl;
}
}
