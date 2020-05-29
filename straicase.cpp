#include<iostream>
using namespace std;
int res(int n,int c)
{
	if(c==n)
		return 1;
	if(c>n)
		return 0;
	return (res(n,c+1)+res(n,c+2));
}
int main()
{
int a[n]={0};
a[1]=0;
for(int i=2;i<=n;i++)
	a[i]=a[i-1]+a[i-2]+1;
cout<<a[n]+1;
}

