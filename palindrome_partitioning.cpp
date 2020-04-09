#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int isPalindrome(int i,int j,string x)
{
  while(i<=j)
  {
    if(x[i++]!=x[j--])
    return 0;
  }
  return 1;
}

void partition(int start,string s,vector<string> &v,vector<vector<string>> &ans)
{
  int n=s.length();
  if(start==n)
  {
    ans.push_back(v);
  }
  else
  {
    for(int i=start;i<n;i++)
    {
      if(isPalindrome(start,i,s))
      {
        v.push_back(s.substr(start,i-start+1));
        partition(i+1,s,v,ans);
        v.pop_back();
      }
    }
  }
}
vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    vector<string> v;
    partition(0,s,v,ans);
    return ans;
}
int main()
{
  string x;
  cin>>x;
  partition(x);
}
