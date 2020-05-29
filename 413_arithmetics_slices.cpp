#include<iostream>
#include<vector>
using namespace std;
int count(int n)
{

  return (n*(n-1))/2;
}
int numberOfArithmeticSlices(vector<int>& v) {
  int n=v.size();
  if(n<2)
  return 0;
  int a[n-1];
  for(int i=0;i<n-1;i++)
  {
    a[i]=v[i+1]-v[i];
  }
  int c=1;
  int sum=0;
  for(int i=0;i+1<n-1;i++)
  {

    if(a[i]==a[i+1])
    c++;
    else
    {
      if(c>=2)
        {
           sum+=count(c);
           cout<<endl;
//cout<<sum<<"  "<<c<<endl;
        }
     c=1;
    }
  }
  if(c>=2)
    {
       sum+=count(c);
       cout<<endl;
//cout<<sum<<"  "<<c<<endl;
    }
      return sum;
  }
int main()
{
  vector<int> a={1,1,1,2,2,2,2};
cout<<numberOfArithmeticSlices(a);
}
