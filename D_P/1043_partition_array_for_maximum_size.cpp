#include<bits/stdc++.h>
using namespace std;
int get_max(vector<int> &a,int s,int e)
{
    int mx=0;
    for(int i=s;i<=e;i++)
    {
    mx=max(mx,a[i]);
    }
    return mx*(e-s);

}
int maxSumAfterPartitioning(vector<int> &a, int k,int s) {
        int n=a.size();
        int area;
        int mx=0;
        if(s==n)
        return 0;
        for(int i=s;i<n;i++)
        {
            for(int j=1;j<k&&i+j<n;j++)
            {
                int k=get_max(a,i,i+j);
             // cout<<k<<" ";
             area=k+maxSumAfterPartitioning(a,k,j+i);
          // cout<<area<<" ";
          mx=max(mx,area);
            }
        }
        

        return mx;

}
int main()
{
vector<int> a={1,15,7,9,2,5,10};
cout<<"\n";
cout<<maxSumAfterPartitioning(a,3,0);
}