#include<bits/stdc++.h>
using namespace std;
   int dominantIndex(vector<int>& v) {
int m=INT_MIN;
int p;
int n=v.size();
for(int i=0;i<n;i++)
{
if(v[i]>m)
{
m=v[i];
p=i;
}}
for(int i=0;i<n;i++)
{
if(i!=p)
{
if(v[i]*2>m)
return -1;
}
}
return p;
}
int main()
{
int cas;
cin>>cas;
vector<int> v;
while(cas--)
{
int k;
cin>>k;
v.push_back(k);
}
cout<<dominantIndex(v);

}
