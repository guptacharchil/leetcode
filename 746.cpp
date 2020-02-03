#include<bits/stdc++.h>
using namespace std;
 int minCostClimbingStairs(vector<int>& v) {
   int a=0;
   for(int i=1;i<v.size()-1;i++)
   {
     a=a+min(v[i],v[i-1]+v[i+1]);
     i++;
   }
   return a;
 }
int main()
{
  std::vector<int> v;
  int cas;
  cin>>cas;
  while(cas--)
  {
    int k;
    cin>>k;
    v.push_back(k);
  }
  cout<<minCostClimbingStairs(v);
}
