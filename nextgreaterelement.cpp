#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
       for(int i=0;i<a.size();i++)
       {
       	int k=a[i];
       	a[i]=-1;
       	for(int j=0;j<b.size();j++)
       	{
       		if(k==b[j])
       		{
       			for(int l=j;l<b.size();l++)
       			{
       				if(b[l]>k)
       				{
       					a[i]=b[l];
       					goto x;
       				}
       			}
       		}
       	}
       	x:
       }
       return a; 
 }
int main()
{

}