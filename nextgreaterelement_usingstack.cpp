#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nge(vector<int> &v)
{
	std::vector<int> ans(v.size(),0);
	stack<int> s;
	s.push(0);
	for(int i=1;i<v.size();i++)
	{
		cout<<v[s.top()]<<"--"<<v[i]<<endl;
		while(v[s.top()]<v[i]&&s.empty()==false)
			{
				cout<<"sdf";
				ans[s.top()]=v[i];
				s.pop();
				if(s.size()==0)
					break;
			}
			
				s.push(i);
			

	}
	for(int i:ans)
		cout<<i<<"  ";
	cout<<"\n";
return ans;
}
int main()
{
	int cas;
	cin>>cas;
	std::vector<int> v;
	while(cas--)
	{
		int k;
		cin>>k;
		v.push_back(k);
	}
	std::vector<int> v1=nge(v);
	for(int i:v1)
		cout<<i<<" ";

}