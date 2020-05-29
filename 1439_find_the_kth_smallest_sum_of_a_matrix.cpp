#include<bits/stdc++.h>
using namespace std;    
    int kthSmallest(vector<vector<int>>& mat, int kk) {
    vector<int> ans={0};
for(int i=0;i<mat.size();i++)
{
	vector<int> tem;
	for(int j=0;j<mat[0].size();j++)
	{
		for(int k=0;k<ans.size();k++)
			tem.push_back(mat[i][j]+ans[k]);
	}
	ans.clear();
	sort(tem.begin(), tem.end());
	int p=tem.size();
	int x=min(p,kk);
	for(int aa=0;aa<x;aa++)
		ans.push_back(tem[aa]);
	tem.clear();
}
return ans[kk-1];

    }
 int main()
 {
 	vector<vector<int>> a={{1,3,11},{2,4,6}};
 	cout<<kthSmallest(a,5);
 }