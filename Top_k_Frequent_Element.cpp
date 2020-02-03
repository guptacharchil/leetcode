#include<bits/stdc++.h>
using namespace std;
vector<int> topKFrequent(vector<int>& a, int k) {
        map<int,int> mp;
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            v.push_back({i->second,i->first});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        vector<int> g;
        for(int i=0;i<k;i++)
        {
            g.push_back(v[i].second);

        }
        return g;
    
}
int main()
{
    int cas;
    cin>>cas;
    vector<int> v;
    while(cas--){
    int k;
    cin>>k;
    v.push_back(k);
    
    }
    int k;
    cin>>k;
    vector<int> l=topKFrequent(v,k);
    for(int i=0;i<l.size();i++)
    cout<<"  "<<l[i];
}