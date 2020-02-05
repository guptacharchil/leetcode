#include<bits/stdc++.h>
using namespace std;
    bool checkSubarraySum(vector<int>& v, int k) {
    	int n=v.size();
        for(int i=0;i<n-1;i++)
        {
        	int sum=v[i];
        	for(int j=i+1;j<n;j++)
        	{
        		sum+=v[j];
        		if(sum%k==0){
        			return true;
        			break;
        		}
        	}
        }
        return false;
    }
    int main()
    {
    	int cas;
    	cin>>cas;
    	int n;
    	cin>>n;
    	vector<int> v;
    	while(cas--)
    	{
    		int k;
    		cin>>k;
    		v.push_back(k);
    	}
    	cout<<checkSubarraySum(v,n);
    	
    }