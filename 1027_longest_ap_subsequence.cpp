#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int longestArithSeqLength(vector<int>& v) {
      int mx=*max_element(v.begin(),v.end());
      int n=mx/2+1;
      int m=v.size();
      int a[n+1][m+1]={0};
      int c=0;
      for(int i=0;i<=n;i++)
      {
      	for(int j=1;j<m;j++)
      	{
      		if(v[j]==v[j-1]+i)
      		{
      			a[i][j]=a[i][j-1]+1;
      		}
      		else
      			a[i][j]=a[i][j-1];
      		c=max(c,a[i][j]);
      	}
      }
return c;
    }
int main()
{
int cas;
cin>>cas;
std::vector<int> v;
while(cas--)
{
	int k;
	cin>>k;
	v.push_back(k);
}
cout<<longestArithSeqLength(v);
}