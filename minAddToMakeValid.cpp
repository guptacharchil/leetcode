#include<bits/stdc++.h>
using namespace std;
    int minAddToMakeValid(string s) {
    	stack<char> a;
    	//cout<<a.top();
    	//cout<<"jo";
       for(int i=0;i<s.length();i++)
        {//cout<<i<<"\t";
        	if(s[i]==')')
        	{
        		if(a.size()>0)
        		if(a.top()=='('){
        		//	cout<<"a";
        		a.pop();
        		continue;
        	}
        	}
        	
        		a.push(s[i]);
        }
               //cout<<"asdf";
        return a.size();
    }
    int main()
    {
    	string x;
    	cin>>x;
    	//cout<<"asdf";
    	cout<<minAddToMakeValid(x);
    }