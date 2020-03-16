#include<bits/stdc++.h>
using namespace std;
   bool mysort(pair<int,char> a,pair<int,char> b)
   {
   	return a.first>b.first;
   }
    string reorganizeString(string s) {
    	int n=s.length();
    	map<char,int> m;
    	vector<pair<int,char>> v;
    	  for(char i:s)
    		{m[i]++;
		//cout<<n<<m[i];
		if(m[i]>((n+1)/2))
    		return "z";
    		}
    	for(auto i=m.begin();i!= m.end();i++)
    	{
    		v.push_back(make_pair(i->second,i->first));
    		//cout<<i->second<<"-";
    		//if((i->second)>(n+1)/2);
    		//return "";
    	}
    	sort(v.begin(), v.end(),mysort);
    	for(int j=0;j<v.size();j++)
    	{
    		cout<<v[j].first<<"  "<<v[j].second<<"\n";
    	}
string x="";
    	for(int i=0;i<v.size();i++)
    	{
    		while(v[i].first--)
    		{
    			x=x+v[i].second;
    		}
    	}
    	//cout<<x;
    	string ans="";
    	for (int i = 0, j = (n-1)/2+1; i <= (n-1)/2; ++i, ++j)
    	{
   			ans+=x[i];
   			if(j<n)
   			ans+=x[j]; 		
    	}
return ans;

        
       // return "";
    }
    int main()
    {
    	string x;
    	cin>>x;
    	cout<<reorganizeString(x);

    }