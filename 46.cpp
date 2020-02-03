#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
  int tem=*a;
  *a=*b;
  *b=tem;
}
bool valid(vector<int> &v,int l,int r)
{
  for(int i=l;i<r;i++)
  if(v[i]==v[r])
  return 0;
  return 1;
}
void ab(vector<vector<int>> &v1,vector<int> v,int l,int r)
{
  if(l==r){
    for(int i=0;i<r;i++)
    cout<<v[i]<<"  ";
    cout<<endl;
  v1.push_back(v);
  return;}
  else{
    for(int i=l;i<r;i++)
    {
      bool c=valid(v,l,i);
      if(c)
      {
        swap(v[l],v[i]);
        ab(v1,v,l+1,v.size());
        swap(v[l],v[i]);
      }
    }
  }

}
vector<vector<int>> permute(vector<int>& v) {
vector<vector<int>> v1;
  ab(v1,v,0,v.size());
return v1;
   }
   int main()
   {
     int cas;
     cin>>cas;
     std::vector<int> v;

     for(int i=0;i<cas;i++)
    {
      int k;
      cin>>k;
      v.push_back(k);
   }
   vector<vector<int>> k;
   k=permute(v);

 }
