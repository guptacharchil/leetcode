#include<bits/stdc++.h>
using namespace std;
int maxSubsetSum(vector<int> arr) {

for(int i=2;i<arr.size();i++)
{
    arr[i]=max(arr[i-2]+arr[i],max(arr[i],arr[i-1]));
}
int mx=INT_MIN;
for(int i=0;i<arr.size();i++)
mx=max(mx,arr[i]);
return mx;


}
int main()
{
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
  cin>>v[i];
  std::cout << maxSubsetSum(v) << '\n';
}
