#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a={1,2,1,4,1,4};
  int sum=0;
  for(int i:a)
  sum+=i;
  int c=a[0];
  for(int i=1;i<a.size();i++)
  {

    sum=sum-2*a[i-1];
    if(sum-a[i]==0)
    cout<<i+1<<endl;
  }
}
