#include<bits/stdc++.h>
using namespace std;
bool com(vector<int> &a,vector<int> &b)
{
int x=a[0]+a[1];
int y=b[0]+b[1];

if(x==y)
{	if(a[1]==0||b[1]==0)
	{
	return a[1]<b[1];	
	}
	else
	return a[1]>b[1];
}
else
	return x<y;
}    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& v) {
    sort(v.begin(), v.end(),com);
    return v;    
    }
    int main()
    {
    	std::vector<vector<int>> v;
    	v={{7,0},{4,4},{7,1},{5,0},{6,1},{5,2}};
    	v=reconstructQueue(v);
    for(int i=0;i<v.size();i++)
    {
    	//for(int j=0;j<v[i].size();j++)
    	//{
    		cout<<v[i][0]<<"   "<<v[i][1]<<"\n";
    	//}
    }
    }