#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

 int coinChange(vector<int>& coins, int amount) {
 /* 
if(amount==0)
  		return 0;
  int res=INT_MAX;
  for(int i=0;i<coins.size();i++)
  {//int res=INT_MAX;
  	
  	

  	if(amount>=coins[i])
  	{
  	int z=coinChange(coins,amount-coins[i]);
  	if(z!=INT_MAX&&z+1<res)
  		res=z+1;
  	}
  	 return res;
  */
 	//int n=v.coins.size();
 	int a[amount+1];
 	a[0]=0;
 	for(int i=1;i<=amount;i++)
 		a[i]=INT_MAX;
 	for(int i=1;i<=amount;i++)
 	{
 		for(int j=0;j<coins.size();j++)
 			if(coins[j]<=i)
 			{
 				a[i]=min(a[i],a[i-coins[j]]+1);
 				
 			}
 	}
return a[amount];
  }	
 

  

  
  int main()
  {
  	std::vector<int> v={1,2,5};
  	cout<<coinChange(v,11);
  }
