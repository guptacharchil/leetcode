#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int dp[5]={1,2,0,0,0};
	for(int i=2;i<6;i++)
	{
	dp[i]=max(dp[i-1],dp[i-2]+a[i]);
	cout<<dp[i]<<"  ";
	}
	cout<<dp[4];
}
