#include<bits/stdc++.h>
using namespace std;
 string convert(string s, int numRows) {
      string z="";
       vector<vector<char>> v(numRows);
       int l=0;
       int k=-1;
       bool c=true;
       while(l!=s.length())
       {
       	if(c==true)
       	{
       		k++;
       	}
       	else
       	{
       		k--;
       	}
       	char q=s[l];
       	v[k].push_back(q);
       	l++;
       	if(k==numRows-1)
       		c=false;
       	if(k==0)
       		c=true;


       }
       for(int i=0;i<numRows;i++)
       {
       	for(int j=0;j<v[i].size();j++)
       		z=z+v[i][j];
       }

       return z;
    }
    int main()
    {
    	string x;
    	cin>>x;
    	int a;
    	cin>>a;
    	cout<<convert(x,a);
    }
