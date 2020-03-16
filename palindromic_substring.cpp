#include<iostream>
using namespace std;
int countSubstrings(string s) {
int n=s.length();
int a[n][n]={0};

int c=0;
for(int g=0;g<n;g++)
{
  for(int i=0;i+g<n;i++)
  {
    int j=i+g;
    if(s[i]==s[j])
    a[i][j]=(i+1>=j-1)?true : a[i+1][j-1];
  //  else
  if(a[i][j])
  c++;
  }

}
return c;
}
int main()
{
  string x;
  cin>>x;
cout<<countSubstrings(x);
}
