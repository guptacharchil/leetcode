#include<bits/stdc++.h>
using namespace std;
set<string> ans;
void solve(string x,int n,int i)
{
  if(i==0)
  {
    solve("a",n,1);
    solve("b",n,1);
    solve("c",n,1);
  }
  if(n==i)
  {
    ans.insert(x);
    return;
  }
  if(x[i-1]=='a')
  {
    solve(x+'b',n,i+1);
    solve(x+'c',n,i+1);
  }
  else if(x[i-1]=='b')
  {
    solve(x+'a',n,i+1);
    solve(x+'c',n,i+1);
  }
  else if(x[i-1]=='c')
  {
    solve(x+'a',n,i+1);
    solve(x+'b',n,i+1);
  }
}
string getHappyString(int n, int k) {
string x;
solve(x,n,0);
auto a=ans.begin();
int s=ans.size();

if(s<k)
return "";
else{
for(int i=1;i<k;i++)
a++;
  return *a;
}
}
int main()
{
  int cas;
  cin>>cas;
  while(cas--)
  {
    int n,k;
    cin>>n>>k;
    cout<<getHappyString(n,k);
  }
}
