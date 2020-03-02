#include<bits/stdc++.h>
using namespace std;
bool com(vector<int> &a,vector<int>& b)
{
	int x,y;
	x=abs(a[0]-a[1]);
	y=abs(b[0]-b[1]);
	cout<<x<<"-"<<y<<"\n";
	//if(x>y)
		return x>y;
	
} 
int twoCitySchedCost(vector<vector<int>>& v) {
     int n=v.size();
     int sum=0;
     sort(v.begin(), v.end(),com);
     int a[v.size()];
     for(int i=0;i<n;i++)
     {
     	a[i]=abs(v[i][0]-v[i][1]);
     }
     
     /*for(int i=0;i<n;i++)
     {
     	for(int j=0;j<n;j++)
     	{
     		if(a[i]>a[j])
     		{
     			int tem;
     			tem=a[i];
     			a[i]=a[j];
     			a[j]=tem;
     			std::vector<int> t;
     			t=v[i];
     			v[i]=v[j];
     			v[j]=t;
     		}
     	}
     }*/
     for(int i=0;i<v.size();i++)
     {
     	cout<<v[i][0]<<"   "<<v[i][1]<<"\n";
     }
     int k=0,l=0;
 //    int sum=0;
        for(int i=0;i<v.size();i++)
        {
       	if(k<n/2&&v[i][0]<v[i][1])
       	{k++;
       			sum=sum+v[i][0];
       	}
       	else if(l>n/2)
       	{
       		k++;
       	sum=sum+v[i][0];	
       	}
       	else
       	{
       		l++;
sum=sum+v[i][1];
       	}

        }
        return sum;
    }
    int main()
    {
    	std::vector<vector<int>> v={{1,99},{3,5},{10,23},{12,43}};
    cout<<twoCitySchedCost(v);
    }