#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int> nums) {
    vector<vector<int>> v;
    vector<int>::iterator ip;
  ip = std::unique(nums.begin(), nums.begin() + nums.size());
  v.resize(std::distance(nums.begin(), ip));
  cout<<"Adfasd";
              int z=0;
    for(int i=0;i<nums.size()-2;i++)
    {
      for(int j=i+1;nums.size()-1;j++)
      {
        for(int k=j+1;nums.size();k++)
        {
          if(nums[i]+nums[j]+nums[k]==0)
          {
            v[z].push_back(nums[i]);
              v[z].push_back(nums[j]);
                v[z].push_back(nums[k]);

            z++;

          }
        }
      }
    }
    //cout<<"adsfadsf";
return v;
 }
int main()
{
  vector<int> a={-1, 0, 1, 2, -1, -4};
  vector<vector <int> > x=threeSum(a);
  for(int i=0;i<x.size();i++)
  {
  cout<<x[i][0]<<"    "<<x[i][1]<<"      "<<x[i][2]<<endl;
  }
}
