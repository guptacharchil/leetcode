#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
string mostCommonWord(string s, vector<string>& banned) {
      transform(s.begin(), s.end(), s.begin(), ::tolower);   
      string x;
      vector<string> v;
      for(int i=0;i<s.length();i++)
      {
      	if(s[i]==' '||s[i]=='.'||s[i]=='!'||s[i]==';'||s[i]=='\'' ||s[i]=='?'||s[i]==',')
      	{
      		if(x!="")
      			v.push_back(x);
      		x="";
      		continue;

      	}
      	else
      	{
      		x+=s[i];
      	}
      }
      vector<pair<int,string>>vv;

    map<string,int> mp;
    for(auto i:v)
    	mp[i]++;
 	for(auto i:mp)
 	{
 		vv.push_back(pair<int,string>(i.second,i.first));

 	}
 	sort(vv.begin(),vv.end());
 
 	for(int i=vv.size()-1;i>=0;i--)
 	{
 		cout<<vv[i].second<<"\n";
 	auto ff=find(banned.begin(), banned.end(),vv[i].second);
 	if(ff==banned.end())
 		return vv[i].second;
 	}
return "";
}
int main()
{
	std::vector<string> v={"hit"};
	cout<<mostCommonWord("Bob hit a ball, the hit BALL flew far after it was hit.",v);
}