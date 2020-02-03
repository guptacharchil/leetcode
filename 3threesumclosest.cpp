#include<bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
int d=INT_MAX;
int tem;
int sum;
int summ;

for(int i=0;i<nums.size()-2;i++)
{
  for(int j=i+1;j<nums.size()-1;j++)
  {
    for(int k=j+1;k<nums.size();k++)
    {
      sum=nums[i]+nums[j]+nums[k];
        tem=abs(nums[i]+nums[j]+nums[k]-target);
        cout<<tem<<"   "<<sum<<endl;
        if(tem<d){
        d=tem;
        summ=sum;
      }
    }

  }
}
return summ;
 }
int main()
{
  int cas;
  cin>>cas;
  while(cas--)
  {
    std::vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      int k;
      cin>>k;
      v.push_back(k);

    }
    int target;
    cin>>target;
    cout<<threeSumClosest(v,target);
  }
}
