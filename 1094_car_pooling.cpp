#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool carPooling(vector<vector<int>>& trips, int capacity)
{
  vector<int> a(1007);
  for(int i=0;i<1003;i++)
  a[i]=0;

int n=trips.size();
  for(int i=0;i<n;i++)
  {
    a[trips[i][1]]+=trips[i][0];
    a[trips[i][2]]+=-trips[i][0];
  }

  int sum=0;
  for(int i=0;i<1002;i++)
  {sum+=a[i];
cout<<sum<<" ";
    if(sum>capacity)
    {

  //  return false;
    }

  }
  return true;

}
int main()
{
  vector<vector<int>> a={{3,2,7},{3,7,9},{8,3,9}};
  cout<<carPooling(a,11);

}
