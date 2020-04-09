#include<bits/stdc++.h>
using namespace std;
    vector<string> topKFrequent(vector<string>& v, int k) {
	
	map<string,int> m;
	for(int i=0;i<v.size();i++)
	{
		m[v[i]]++;
	}
	vector<string> ans;
	vector<int> a; 
	int n=v.size();    
			for(auto i=m.begin();i!=m.end();i++)
			{
				ans.push_back(i->first);
				a.push_back(i->second);
			}
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n-1;j++)
				{
					if(a[j]<a[j+1])
					{
						int tem=a[j];
						a[j]=a[j+1];
						a[j+1]=tem;
						string x=ans[j];
						ans[j]=ans[j+1];
						ans[j+1]=x;
					}
					
				}
			}
			int l=0;
			std::vector<string> v1;
			while(k--)
			{
				v1.push_back(ans[l]);
				//cout<<ans[l]<<" ";
			l++;
			}
			return v1;
	  }
    int main()
    {
    vector<string> v;
    v={"i", "love", "leetcode", "i", "love", "coding"};
    v=topKFrequent(v,2);
    }