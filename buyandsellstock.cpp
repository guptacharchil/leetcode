#include<iostream>
using namespace std;
struct interval
{
	int start;
	int end;
};
void abc()
{
	//vector<vector<in>> v()
	int n;
		cin>>n;
	interval aa[n/2+1];
int count = 0;

	int i=0;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	while(i<n-1)
	{
		while(i<n-1&&a[i+1]<a[i])
			i++;
		if(i==n-1)
			break;
		aa[count].start=i;
		
	
		while(i<n-1&&a[i+1]>=a[i])
			i++;
		aa[count].end=i;
		count++;


	}
	for(int i=0;i<count;i++)
	{
		cout<<"("<<aa[i].start<<" "<<aa[i].end<<") ";
	}
	cout<<"\n";

}
int main()
{
	int cas;
	cin>>cas;
	while(cas--)
	{
		abc();
	}
}