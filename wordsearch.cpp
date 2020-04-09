#include<bits/stdc++.h>
using namespace std;
	bool check(vector<vector<char>>& v, string w,int a,int b,int c,vector<vector<int>>& v1)
	{
		v1[a][b]=1;
		cout<<a<<" "<<b<<" "<<c<<"   "<<v[a][b]<<"\n";
		int x=v.size();
		int y=v[0].size();

		if(c==w.length())
			return true;
		int k;
		if(v[a][b]==w[c])
		{
			v1[a][b]=1;
			c++;
if(b-1>=0)
				if(!v1[a][b-1]&&v[a][b-1]==w[c])
			return check(v,w,a,b-1,c,v1);
		 k=b+1;
			if(k<y)
				if(!v1[a][k]&&v[a][k]==w[c])
			return check(v,w,a,k,c,v1);
		 k=a+1;

			if(k<x)
				if(!v1[k][b]&&v[k][b]==w[c])
			return check(v,w,k,b,c,v1);
			if(a-1>=0)
				if(!v1[a-1][b]&&v[a-1][b]==w[c])
			return check(v,w,a-1,b,c,v1);
			
			

		}
		else
		{
			k=b+1;
			if(k<y)
				if(!v1[a][k]&&v[a][k]==w[c])
			return check(v,w,a,k,c,v1);
			k=a+1;
			if(k<x)
				if(!v1[k][b]&&v[a][k]==w[c])
			return check(v,w,k,b,c,v1);
			if(a-1>=0)
				if(!v1[a-1][b]&&v[a-1][b]==w[c])
			return check(v,w,a-1,b,c,v1);
			if(b-1>=0)
				if(!v1[a][b-1]&&v[a][b-1]==w[c])
			return check(v,w,a,b-1,c,v1);

		}
		if(c==w.length())
			return true;

return false;
	}
    bool exist(vector<vector<char>>& v, string w) {
        vector<vector<int>> v1;
       if()
    }
int main()
{
vector<vector<char>> v={{'C','A','A'},{'A','A','A'},{'B','C','D'}};
//cout<<"start";
cout<<exist(v,"CAAAACD");
}