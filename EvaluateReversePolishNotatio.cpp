#include<bits/stdc++.h>
using namespace std;
    int evalRPN(vector<string>& s) {
    	int c,b;
    	//a=NULL;
    	stack<int> a;
    	for(int i=0;i<s.size();i++)
    	{
    		if(s[i]=="+")
    		{
    			b=a.top();
    			a.pop();
    			c=a.top();
    			a.pop();
    			a.push(b+c);
    		}
    		else if(s[i]=="-")
    		{
b=a.top();
    			a.pop();
    			c=a.top();
    			a.pop();
    			a.push(b-c);
    		}
    		else if(s[i]=="*")
    		{
    			b=a.top();
    			a.pop();
    			c=a.top();
    			a.pop();
    			a.push(b*c);
    		}
    		else if(s[i]=="/")
    		{
    			b=a.top();
    			a.pop();
    			c=a.top();
    			a.pop();
    			a.push(c/b);
    		}
    		else
    		{
    			a.push(stoi(s[i]));
    		}

    	}
        return a.top();
    }
    int main()
    {
    	int cas;
    	cin>>cas;
    	std::vector<string> v;
    	while(cas--)
    	{
    		string x;
    		cin>>x;
    		v.push_back(x);
    	}
    	cout<<evalRPN(v);
    }