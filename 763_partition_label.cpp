#include<bits/stdc++.h>
using namespace std;
    vector<int> partitionLabels(string s) {
    	int n=s.length();
    	//a[n]={0};
    	int aph[26]={0};
    	for(int i=0;i<n;i++)
    	{
    		aph[(int)s[i]-'a']=i;
    	}
        for(int i=0;i<n;i++)
        {
        	cout<<i<<"  "<<s[i]<<"  "<<aph[int(s[i])-'a']<<"\n";
        }
        std::vector<int> v;
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
        	mx=max(mx,aph[int(s[i])-'a']);
        	if(mx==i)
        		{v.push_back(i+1);
        			cout<<i+1<<" ";
        		}
        }
        for(int i=v.size()-1;i>=0;i--)
        	v[i+1]=v[i+1]-v[i];
        for(auto i:v)
        	cout<<i<<" ";
        return v;
    }

int main()
{
	string cas;
	cin>>cas;
	partitionLabels(cas);
}