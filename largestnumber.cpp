#include<bits/stdc++.h>
using namespace std;
bool mysort(string a,string b)
{
	int k=0;
	while(1)
	{
		if(k==b.size())
			return false;
		if(k==a.size())
			return true;
		if(a[k]==b[k])
		{
			k++;
		}
		else
			return a[k]>b[k];

	}
}
string largestNumber(vector<int>& nums) {
vector<string> v;
for(int i:nums)
	v.push_back(to_string(i));
sort(v.begin(), v.end(),mysort);
string s="";
for(string x:v)
	s=s+x;
return s;
}
int main()
{
 vector<int> v={3,30,34,5,9};
	cout<<largestNumber(v);
}