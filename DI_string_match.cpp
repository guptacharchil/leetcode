#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
    vector<int> diStringMatch(string s) {
        //vector<int> v;
vector<int> v1;
    int i=0;
    int j=s.length();
     int k=0;
     while(i<=j)
     {
     	if(s[k]=='I')
     	{
     		v1.push_back(i);
     		i++;
     	}
     	else
     	{
     	v1.push_back(j);
     		j--;	
     	}
     	k++;
     }
     return v1;
    }
int main()
{
	string x;
	cin>>x;
	std::vector<int> v=diStringMatch(x);
	for(int i:v)
		cout<<i<<" ";
}