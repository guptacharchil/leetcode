#include<bits/stdc++.h>
using namespace std;
void cheak(int a[])
{
  a[1]=10;
  a[0]=20;
}
int main()
{
  int a[]={1,2,3,45};
  cheak(a);
  for(int i=0;i<3;i++)
  cout<<a[i]<<" ";
}
