#include<bits/stdc++.h>
using namespace std;
 vector<int> productExceptSelf(vector<int>& v) {
int n=v.size();
   int a[n]={1};
   int b[n]={1};
   int k=1;
   a[0]=1;
   b[n-1]=1;
   for(int i=1;i<n;i++)
   {
     a[i]=(a[i-1])*(v[i-1]);
   }
   for(int i=n-2;i>=0;i--)
   b[i]=(b[i+1])*(v[i+1]);

std::vector<int> x;
 for(int i=0;i<n;i++)
 {
   x.push_back(a[i]*b[i]);
 }
return x;
}
int main()
{
  byte e=8;
  e+=10;
  cout<<e;
  int a,b,c,d;
  a=b=c=d=20;
  a+=b-=c*=d/=20;
  cout<<a<<b<<c<<d;
  if(a==c)
  {
    cout<<~3;
  }
  int cas;
  cin>>cas;
  std::vector<int> v;
  while(cas--)
  {
    int k;
    cin>>k;
    v.push_back(k);
  }
  std::vector<int> s;
  s=productExceptSelf(v);
for(int i=0;i<s.size();i++)
cout<<s[i]<<"   ";
}
