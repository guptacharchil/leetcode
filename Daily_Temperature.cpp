    #include<bits/stdc++.h>
    using namespace std;
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> v(t.size(),0);
        int n=t.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(t[i]<t[j])
                {v[i]=j-i;
                break;
                        }            }
        }
        return v;
    }
    int main()
    {
        int cas;
        cin>>cas;
        vector<int> v;
        while(cas--)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        v=dailyTemperatures(v);
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<"   ";
        }
    }