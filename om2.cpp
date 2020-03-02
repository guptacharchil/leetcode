#include<bits/stdc++.h>
using namespace std;
int getSpecialSubstring(string s, int k, string ch) {
string normal="";
for(int i=0;i<26;i++)
{
if(ch[i]=='0')
{
	normal+=('a'+i);
}}
int mx=0;
for(int i=0;i<s.length();i++)
{
	int c=0;
	int z=k;
for(int j=i;j<s.length();j++)
{


c++;
size_t found = normal.find(s[j]); 
    if (found != string::npos)
    {
    	z--;
    }
if(z==0)
break;

}
//cout<<mx<<"  "<<i<<" - ";
mx=max(mx,c);

}
return mx;}



int main()
{
cout<<getSpecialSubstring("giraffe",2,"01111001111111111011111111");
}