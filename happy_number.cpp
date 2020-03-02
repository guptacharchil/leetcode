#include<bits/stdc++.h>
using namespace std;


    bool isHappy(int n) {
          int sum=0;
          while(n>0)
          {
          	int k=n%10;
          	sum+=k*k;
          	n=n/10;	
          }
          if(sum==1)
          	return true;
          if(sum==4)
          return false;
          else
          isHappy(sum);      
    }
    int main()
    {
    	int cas;
    	cin>>cas;
    	cout<<isHappy(cas);

    }