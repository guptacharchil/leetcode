#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>& v,int l,int r,int target)
{
  if(v[l]==target)
  {
    return l;
  }
  if(v[r]==target)
  return r;
  if(l<r)
  {
  int mid=l+(r-l)/2;
  if(v[mid]==target)
  {
    return mid;
  }
  if(v[mid]<target)
  {
    binary(v,mid+1,r,target);
  }
  else{
    binary(v,l,mid-1,target);
  }

}
else
{
  return -1;
}
}
int pivot(vector<int>& v,int l,int r)
{

  int mid=l+(r-l)/2;
//cout<<l<<"   "<<mid<<"   "<<r<<endl;
  if(v[mid]>v[mid+1])
  return mid;
  if(v[l]<v[mid])
  pivot(v,mid,r);
  else
  pivot(v,l,mid);
}
int search(vector<int>& v, int target) {
if(v[0]<v[v.size()-1])
{
  return binary(v,0,v.size()-1,target);
}
else{
int x=pivot(v,0,v.size());
cout<<"pivot"<<x<<endl;
if(target<=v[x]&&v[0]<=target)
return binary(v,0,x,target);
else
return binary(v,x+1,v.size(),target);
}
}
int main()
{
  int n;
  cin>>n;
  int t;
  cin>>t;
std::vector<int> v;
  while(n--)
  {
    int k;
    cin>>k;
    v.push_back(k);
  }
cout<<search(v,t);
}
