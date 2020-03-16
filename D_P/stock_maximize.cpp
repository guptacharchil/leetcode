#include<iostream>
using namespace std;
int main()
{
  long long int cas;
  cin>>cas;
  while(cas--)
  {
    long long int n;
    cin>>n;
    long long int a[n];
    long long int mx[n];
    for(long long int i=0;i<n;i++)
    {
      cin>>a[i];
      mx[i]=a[i];
    }
    for(long long int i=n-2;i>=0;i--)
    {
      mx[i]=max(mx[i+1],a[i]);

    }
  long long int sum=0;
  for(long long int i=0;i<n;i++)
  {
    sum+=mx[i]-a[i];
  }
cout<<sum<<endl;
  }
}
