#include<bits/stdc++.h>
using namespace std;
   bool canJump(vector<int>& v) {
      int n=v.size();
if(n==1)
	return true;
      for(int i=n-1;i>=0;i--)
      {int p=1;
      	if(v[i]==0)
      	{int c=1;
      		for(int j=i-1;j>=0;j--)
      		{
      			if(v[j]>c){
      				p=0;
      				break;
      			}
      			else
      				c++;
      		}
      		if(p)
      			return false;

      	}
      }
      return true;
    }
    int main()
    {
    	std::vector<int> v={3,0,1,1,4};
    cout<<canJump(v);
    }