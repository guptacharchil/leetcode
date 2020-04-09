#include<iostream>
using namespace std;
int ways(int n,int a[])
{
	if(n==0)
		return 1;
	if(n<0)
		return 0;
	if(a[n]!=-1)
		return a[n];
	int ans=ways(n-1,a)+ways(n-2,a)+ways(n-3,a);
	return ans;
}
int main()
{
	int a[]={-1,-1,-1,-1,-1};
	cout<<ways(4,a);
}
