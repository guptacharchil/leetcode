#include<iostream>
#include<string>
using namespace std;
string say(string x)
{
	int n=x.length();
	string s="";
	int c=0;
	for(int i=0;i<n;i++)
	{
		c++;
		if(x[i]!=x[i+1])
		{
			//cout<<"afasd";
			s+=to_string(c)+x[i];
			
			c=0;
		}
		//cout<<x<<c<<endl;;
	}

	//cout<<s;
	return s;
}
int main()
{
	int n;
	cin>>n;
	string x="1";
	while(n--)
	{	
cout<<x<<"\n";
		x=say(x);
		
	}
}