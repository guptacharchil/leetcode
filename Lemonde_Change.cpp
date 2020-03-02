 #include<bits/stdc++.h>
using namespace std;
 bool lemonadeChange(vector<int>& v) {
        int a=0;
        int b=0;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
        	if(v[i]==5)
        		a++;
        	else if(v[i]==10)
        		{a--;
        			b++;
        		}
        	else if(v[i]==20)
        	{
        		if(b>0)
        		{
        			b--;
        			a--;
        		}
        		else
        		{
        			a=a-3;
        		}
        	}
        	if(b<0||a<0)
        	return false;	
        }
return true;

 }
 int main()
 {
 std::vector<int> v={5,10,20};
 cout<<lemonadeChange(v);
 }