#include<bits/stdc++.h>
using namespace std;
 bool mysort(vector<int> &a,vector<int> &b)
 {
 	int m,n;
 	m=abs(a[0])+abs(a[1]);
 	n=m=abs(b[0])+abs(b[1]);
 	return m<n;
 }
  vector<vector<int>> kClosest(vector<vector<int>>& v, int k) {
        sort(v.begin(),v.end(),mysort);
        std::vector<vector<int>> ans;
        int c=0;
        while(k--)
        {
		ans.push_back(v[c]);
		c++;
        }
        return ans;
    }
int main()
{
	std::vector<vector<int>> v;
	v={{1,3},{-2,2}};
	v=kClosest(v,2);
	for(int i=0;i<2;i++)
		cout<<v[i][0]<<"   "<<v[i][1]<<" \n";
}