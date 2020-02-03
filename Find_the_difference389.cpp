#include<bits/stdc++.h>
using namespace std;
char findTheDifference(string s, string t)
{
char a=0;
for(int i=0;i<s.length();i++)
{
	a^=s[i];
}

for(int i=0;i<t.length();i++)
{
	a^=t[i];
}
return a;
}
int main()
{
	string x,e;
	cin>>x>>e;
cout<<findTheDifference(x,e);
}