#include<bits/stdc++.h>
using namespace std;
static bool mysort(vector<int>& a,vector<int>& b)
{
	return a[1]>b[1];
}
    vector<int> filterRestaurants(vector<vector<int>>& v, int veg, int mp, int md) {
        sort(v.begin(), v.end(),mysort);
        std::vector<int> ans;
        for(int i=0;i<v.size();i++)
        {
        	if(veg==1)
        	{
        		if(v[i][2]==1&&v[i][3]<=mp&&v[i][4]<=md)
        			ans.push_back(v[i][0]);
        	}
        	else
        	{
        	if(v[i][3]<=mp&&v[i][4]<=md)
        			ans.push_back(v[i][0]);	
        	}
        }
return ans;
    }
  int main()
  {
  	vector<vector<int>> v={{1,4,1,40,10},{2,8,0,50,5},{3,8,1,30,4},{4,10,0,10,3},{5,1,1,15,1}};
  v=filterRestaurants(v,1,50,10);
  }