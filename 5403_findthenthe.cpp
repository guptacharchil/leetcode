#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> v,int n,int m,int i,int sum,vector<int> &a)
{
	//cout<<sum<<" ";
	if(i==n)
	{
		a.push_back(sum);
		return ;
	}
	for(int j=0;j<m;j++)
	solve(v,n,m,i+1,sum+v[i][j],a);
}
    int kthSmallest(vector<vector<int>>& mat, int k) {
        
    }
int main()
{
vector<vector<int>> mat={{1,3,11},{2,4,6}};
vector<int> a;
solve(mat,mat.size(),mat[0].size(),0,0,a);
for(int i:a)
cout<<i<<" ";
}