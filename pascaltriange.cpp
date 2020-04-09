#include<iostream>
#include<vector>
using namespace std;
 vector<vector<int>> generate(int numRows) {
        
 	vector<vector<int>> a;
 	std::vector<int> v1={1};
 	a.push_back(v1);
 	for(int i=1;i<numRows;i++)
 	{
 		std::vector<int> v;
 		v.push_back(1);
 		{
 			for(int j=0;j<a[i-1].size();j++)
 			{
 				if(j+1<a[i-1].size())
 					v.push_back(a[i-1][j]+a[i-1][j+1]);
 			}
 			v.push_back(1);
 		}
 		a.push_back(v);
 		 	}
  return a;
    }
    int main()
    {
    	int cas;
    	cin>>cas;
    	std::vector<vector<int>> v=generate(cas);
    	for(int i=0;i<v.size();i++)
    		{for(int j=0;j<v[i].size();j++)
    		{cout<<v[i][j]<<" ";}cout<<"\n";}

    }