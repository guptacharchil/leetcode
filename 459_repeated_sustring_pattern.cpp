#include<iostream>
#include<string>
using namespace std;
bool cheak(string a,string s)
{
	int n=a.length();
	int m=s.length();
	int k=m/n;
	cout<<a<<" - "<<s<<"   "<<k<<endl;
	string x;
	while(k--)
		x+=a;
	cout<<x<<"  "<<s<<endl;
	if(x==s)
		{cout<<"uea";
		return true;
	}
	else
		return false;
}
bool repeatedSubstringPattern(string s) {
        int n=s.length();
        for(int i=1;i<=n/2;i++)
        {
        	string a;
        	a=s.substr(0,i);
        	if(cheak(a,s))
        		return true;
        }
        return false;
}


int main()
{
string x;
cin>>x;
cout<<repeatedSubstringPattern(x);
}