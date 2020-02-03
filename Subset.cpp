#include<bits/stdc++.h>
using namespace std;

  vector<vector<int>> subsets(vector<int>& v) {
       int m=v.size();
       int n=pow(2,m);
       std::vector<vector<int>> f;
       for(int i=0;i<n;i++)
       {
       	std::vector<int> v1;
       	for(int j=0;j<m;j++)
       	{
       		if(i&(1<<j))
       			v1.push_back(v[j]);
       	//cout<<v[j];
       	}
       	if(find(f.begin(),f.end(),v1)==f.end())
       		f.push_back(v1);
      // cout<<"\n";
       }
       return f;
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
 	std::vector<vector<int>> l=subsets(v);
 	for(int i=0;i<l.size();i++)
 	{
 		for(int j=0;j<l[i].size();j++)
 		{
cout<<l[i][j];
 		}
 		cout<<"\n";
 	}
 	return 0;
 }