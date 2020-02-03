#include<bits/stdc++.h>
using namespace std;
int ab(vector<int> &v)
{
vector <int> dp;
dp.push_back(v[0]);
dp.push_back(max(dp[0],v[1]));
for(int i=2;i<v.size();i++)
{
dp.push_back(max(dp[i-2]+v[i],dp[i-1]));
}
int k= dp[v.size()-1];
//cout<<k<<endl;
return k;
}
int main()
{
int cas;
cin>>cas;
vector<int> v;
while(cas--){
int k;
cin>>k;
v.push_back(k);}
cout<<ab(v);
}

