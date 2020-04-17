#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int minSubArrayLen(int s, vector<int>& v)
{   int ans=INT_MAX;
    int sum=0;
    int j=0;
    for(int i=0;i<v.size();i++)
    {
      sum=sum+v[i];

        while(sum>s)
        {
          sum=sum-v[j];
          j++;
        }
      //  cout<<sum<<" "<<i-j<<endl;
      if(sum==s)
      {
        ans=min(ans,i-j+1);
      }
    }
    if(ans==INT_MAX)
    return 0;
    return ans;
}
int main()
{
  std::vector<int> v={2,3,1,2,4,3};
  cout<<minSubArrayLen(7,v);
}
