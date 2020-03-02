#include<bits/stdc++.h>
using namespace std;
string common(string a,string b)
{
string x;
	//std::vector<char> v;
	for(int i=0;i<a.length();i++)
	{
		for(int j=0;j<b.length();j++)
		{
			if(a[i]==b[j]&&b[j]!=0)
			{x+=a[i];
		//		v.push_back(a[i]);
				//a[i]=0;
				b[j]=0;
			}
		}
	}
	return x;
}
std::vector<string> commonChars(vector<string>& v) {
      vector<string> tem;
    string x;
    for(int i=0;i<v[0].size();i++)
    x+=v[0][i];

    for(int i=1;i<v.size();i++)
    {

    	x=common(v[i],x);
    	//cout<<x<<endl;
    } 
    for(int i=0;i<x.length();i++)
    {
    	string k(1,x[i]);
    	tem.push_back(k);

    }
    return tem;
}	
int main()
{
	vector<string> v={"bella","label","roller"};
	//string x;
	v=commonChars(v);
for(string i:v)
	cout<<i<<" ";
}