#include<bits/stdc++.h>
using namespace std;
int repeatedStringMatch(string A, string B)
{
	int n=A.length();
	int m=B.length();
	int k=m/n;
	int x=B.find(A);
	int c=0;
	cout<<x;
	string t;
	for(int i=0;i<k+2;i++)
	{
		t=t+A;
		int j=t.find(B);
		c++;
		if(j!=-1){
			cout<<t;
			return c;
		}

	}
	return -1;
}
int main()
{
	string n,m;
	cin>>n>>m;
	cout<<repeatedStringMatch(n,m);
}