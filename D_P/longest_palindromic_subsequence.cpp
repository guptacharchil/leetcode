#include<bits/stdc++.h>
using namespace std;
/*
int longest_palindrome(string x,int i,int j)
{

  if(i==j)
  return 1;
if(i<j)
{
  if(x[i]==x[j])
  return longest_palindrome(x,++i,--j)+2;
  else
  return max(longest_palindrome(x,i,j-1),longest_palindrome(x,i+1,j));
}
else
return 0;
}

*/
//D_P
int lps(string x)
{
  int n=x.length();
  int a[n][n]={0};
  for(int i=0;i<n;i++)
  a[i][i]=1;
  for(int g=1;g<n;g++)
  {
    for(int i=0;i<n-g;i++)
    {
    int j=i+g;
      if(x[i]==x[j])
      a[i][j]=a[i+1][j-1]+2;
      else
      a[i][j]=max(a[i][j-1],a[i+1][j]);
    }
  }
  return a[0][n-1];
}

int main()
{
  string x;
  cin>>x;
  //cout<<longest_palindrome(x,0,x.length()-1);
cout<<lps(x);
}
