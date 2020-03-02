 #include<bits/stdc++.h>
 using namespace std;
struct aa
{
	int a;
	int c;
	char b;
};
bool mycomp(struct aa p,struct aa q)
{
	if(p.a!=q.a)
		return p.a>q.a;
	else
		return p.c<q.c;
}
string frequencySort(string s) {
map <int,char> m;
int n=s.length();
int f[n]={0};
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(s[i]==s[j])
			f[i]++;
	}
}
struct aa aaa[n];
for(int i=0;i<n;i++)
{
	aaa[i].a=f[i];
	aaa[i].b=s[i];
	aaa[i].c=i;
}
stable_sort(aaa, aaa + n, mycomp);
for(int i=0;i<n;i++)
{
	cout<<aaa[i].a<<"   "<<aaa[i].b<<endl;
}
 }


 int main()
 {
 	string x;
 	cin>>x;
 	frequencySort(x);
 cout<<x;
 }