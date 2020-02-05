#include<bits/stdc++.h>
using namespace std;
    int subarraysDivByK(vector<int>& v, int K) {
        
            int n=v.size();
        int c=0;
        int a[n][n]={0};
        cout<<a[2][2];
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=v[j];
               // cout<<sum<<"\n";
                int t=(sum%K);
                if(t==0){
                    c++;
                }
            }
        }
        return c;
        
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
    	cout<<subarraysDivByK(v,n);
    	
    }