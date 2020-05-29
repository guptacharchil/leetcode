#include<bits/stdc++.h>
using namespace std;
    int numTeams(vector<int>& a) {
int c=0;
for(int i=0;i<a.size();i++)
{
  int p=0,q=0,r=0,s=0;
for(int j=0;j<i;j++)
{
  if(a[i]<a[j])
  p++;
  else if(a[j]<a[i])
  q++;
}
for(int j=i+1;j<a.size();j++)
{
  if(a[i]<a[j])
  r++;
  else if(a[j]<a[i])
  s++;
}
c+=q*r+s*p;

}
return c;

}
int main()
{
vector<int> v={1,2,3,4,5,6};
cout<<numTeams(v);
}
