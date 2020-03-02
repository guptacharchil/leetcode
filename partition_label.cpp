#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool chk(int a[])
{
	int i=*max(a,a+26);
	if(i==0){
		return true;
a[a.size()]=0;
	}
	else
		return false;
}

 vector<int> partitionLabels(string s) {

}
int main()
{
	string x;
	cin>>x;
	vector<int> v= partitionLabels(x);
	for(int i:v)
		cout<<i<<" ";
}