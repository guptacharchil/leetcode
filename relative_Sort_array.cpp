   #include<bits/stdc++.h>
   using namespace std;
   vector<int> relativeSortArray(vector<int>& a, vector<int>& b) {
       vector<int> ans;
                     sort(a.begin(),a.end());
                     for(int i=0;i<b.size();i++)
                     {
                         auto x=lower_bound(a.begin(),a.end(),b[i]);
                         auto y=upper_bound(a.begin(),a.end(),b[i]);
                         for(auto i=x;i!=y;i++)
                            ans.push_back(*i);
                         a.erase(x,y);

                     }
                     for(int i=0;i<a.size();i++)
                     ans.push_back(a[i]);
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
    }
    int main()
    {
        vector<int> a{2,3,1,3,2,4,6,7,9,2,19};
        vector<int>b {2,1,4,3,9,6};
        a=relativeSortArray(a,b);
    }