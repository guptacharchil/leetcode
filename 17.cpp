#include <bits/stdc++.h>
using namespace std;
vector<string> add(vector<string> &res,vector<char> &v)
{
	std::vector<string> tem;
	//cout<<"==============================="<<endl;
	for(int i=0;i<v.size();i++)
	{
		//cout<<v[i]<<"   ";
	}
	//cout<<"==============================="<<endl;
	if(res.size()==0)
	{
		for(int i=0;i<v.size();i++)
		{
			string x(1,v[i]);
			res.push_back(x);
		}
		return res;
	}

	//cout<<"hi";
	for(int i=0;i<res.size();i++)
	{
		for(int j=0;j<v.size();j++)
		{
			//cout<<res[i]<<"   "<<v[j]<<endl;
			//cout<<res[i]<<"  "<<v[j]<<" * ";
			//res[i].push_back(v[j]);
			tem.push_back(res[i]+v[j]);
		}
	}
	return tem;
}
vector<string> letterCombinations(string digits) {
        vector<vector<char>> v{{'\0'},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
        std::vector<string> res;

        for(int i=0;i<digits.length();i++)
        {
        //	cout<<digits[i]-'1';
        	res=add(res,v[digits[i]-'1']);
        }
        return res;

    }
    int main()
    {
    	string x;
    	cin>>x;
    	vector<string> v=letterCombinations(x);
    	for(int i=0;i<v.size();i++)
    		cout<<v[i]<<"   ";
    }