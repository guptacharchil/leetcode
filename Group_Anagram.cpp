#include<bits/stdc++.h>
using namespace std;
    vector<vector<string>> groupAnagrams(vector<string>& v) {
       std::vector<vector<string>> f;
        for(int i=0;i<v.size();i++)
        {std::vector<string> x;
        	string k=v[i];
        	sort(k.begin(),k.end());
        	for(int j=i;j<v.size();j++)
        	{
        		string q=v[j];
        		sort(q.begin(),q.end());
        		if(k==q)
        		{
        			x.push_back(v[j]);
        			v.erase(find(v.begin(),v.end(),v[j]));
        			j--;
        		}
        	}
        	f.push_back(x);
        }
        return f;
    }
int main()
{
	int cas;
	cin>>cas;
	std::vector<string> v;
	while(cas--)
	{
		string x;
		cin>>x;
		v.push_back(x);
	}

	std::vector<vector<string>> v1= groupAnagrams(v);

}