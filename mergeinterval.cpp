#include<bits/stdc++.h>
using namespace std;
bool mysort(vector<int>& x,vector<int>& y)
{
    return x[0]<y[0];
}
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>> ans;
        sort(v.begin(),v.end(),mysort);
         ans.push_back(v[0]);
         int k=0;
        for(int i=1;i<v.size();i++)
        {
            if(ans[k][1]>=v[i][0])
            {
                ans[k][1]=max(ans[k][1],v[i][0]);
            }
            else
            {
            k++;
            ans.push_back(v[i]);
            }
            
        }
        return ans;



    
    }
int main()
{
    vector<vector<int>> v={{12,3},{2,6},{8,10},{15,18}};
    v=merge(v);
    for(int i=0;i<v.size();i++)
    cout<<v[i][0]<<"   "<<v[i][1]<<"\n";
}



    //[[1,3],[2,6],[8,10],[15,18]]
    // [[1,6],[8,10],[15,18]]