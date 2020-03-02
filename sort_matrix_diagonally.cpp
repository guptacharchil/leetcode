#include<bits/stdc++.h>
using namespace std;
   vector<vector<int>> diagonalSort(vector<vector<int>>& v) {
   	int n=v.size();
   	int m=v[0].size();
   	//cout<<"Adf\n";
   	int k,l;
   	k=0;l=0;
   	for(int i=0;i<v[0].size();i++)
   	{//cout<<"Adf1\n";
   		l=0;
   		k=i;
   		vector<int> tem;
   		while(k!=m&&l!=n)
   		{
   			//cout<<v[l][k]<<"  ";
   			tem.push_back(v[l][k]);
   			k++;
   			l++;
   		}
   		sort(tem.begin(), tem.end());
   		k=i;
   		l=0;
   		int p=0;
   		while(k!=m&&l!=n)
   		{
   			v[l][k]=tem[p];
   			k++;
   		l++;p++;
   		}

   	}
   	for(int i=1;i<v.size();i++)
   	{//cout<<"Adf1\n";
   		l=i;
   		k=0;
   		vector<int> tem;
   		while(k!=m&&l!=n)
   		{
   			//cout<<v[l][k]<<"  ";
   			tem.push_back(v[l][k]);
   			k++;
   			l++;
   		}
   		sort(tem.begin(), tem.end());
   		k=0;
   		l=i;
   		int p=0;
   		while(k!=m&&l!=n)
   		{
   			v[l][k]=tem[p];
   			k++;
   		l++;p++;
   		}

   	}
    return v;
    }
    int main()
    {
    	vector<vector<int>> v={{3,3,1,1},{2,2,1,2},{1,1,1,2}};
    	for(int i=0;i<v.size();i++)
    	{
    		for(int j=0;j<v[0].size();j++)
    		{
    			cout<<v[i][j]<<" ";
    		}
    		cout<<"\n";
    	}
    	cout<<"\n\n";
    	vector<vector<int>> p=diagonalSort(v);
    	for(int i=0;i<v.size();i++)
    	{
    		for(int j=0;j<v[0].size();j++)
    		{
    			cout<<p[i][j]<<" ";
    		}
    		cout<<"\n";
    	}
}