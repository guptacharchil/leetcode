#include<bits/stdc++.h>
using namespace std;
int lengthOfLIS(vector<int>& v) {
        int n=v.size();
        int a[n];
        for(int i=0;i<n;i++){
        a[i]=1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(v[i]>v[j]&&a[i]<a[j]+1)
                {a[i]=a[j]+1;
                
                }
                
            }
        }

        }
        int mx=0;
        for(int i:a)
        {
            mx=max(mx,i);
        }
        return mx;

    }
int main()
{
    int cas;
    cin>>cas;
    vector<int> v;
    for(int i=0;i<cas;i++)
    {
        int in;
        cin>>in;
        v.push_back(in);
    }
    cout<<lengthOfLIS(v);
}