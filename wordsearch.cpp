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
        for(int i=0;i<v.size();i++){
        	std::vector<int> v0;
        	for(int j=0;j<v[0].size();j++)
        		{
        			v0.push_back(0);

        		}
        		v1.push_back(v0);
        	}
        	//cout<<"Start2";
        	bool t=false;
        	for(int i=0;i<v.size();i++)
        	{
        		for(int j=0;j<v[0].size();j++)
        		{
        			if(v[i][j]==w[0]){
        for(int r=0;r<v.size();r++){
        	std::vector<int> v0;
        	for(int t=0;t<v[0].size();t++)
        		{
        			v0.push_back(0);

        		}
        		v1.push_back(v0);
        	}



        				cout<<"-";
        				 t=check(v,w,i,j,1,v1);	
        				if(t)
        					return t;
        		
        		}}}
        	
        
    return false;
    }
int main()
{
vector<vector<char>> v={{'C','A','A'},{'A','A','A'},{'B','C','D'}};
//cout<<"start";
cout<<exist(v,"CAAAACD");
}