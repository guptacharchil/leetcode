#include<bits/stdc++.h>
using namespace std;
   bool containsNearbyAlmostDuplicate(vector<int>& v, int k, int t) {
	int n=v.size();
	for(int i=0;i<n;i++)
	{
	for(int j=1;j<=k&&k+i<n;j++)
	{
cout<<i<<"  "<<j<<"\n";

	if(abs(v[i]-v[i+j])<=t)

		return true;
	}
	}
	return false;
    }
int main()
{
int cas;
cin>>cas;
vector<int> v;
while(cas--)
{
int k;
cin>>k;
v.push_back(k);
}
int m;
cin>>m;
int c;
cin>>c;
cout<<containsNearbyAlmostDuplicate(v,m,c);

}
