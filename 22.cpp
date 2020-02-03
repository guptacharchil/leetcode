#include<bits/stdc++.h>
using namespace std;
void ab(int open,int close,string x,vector<string> &v,int n)
{
  if(close==n)
  {
    v.push_back(x);
    return;
  }
  else{
    if(open<n)
    ab(open+1,close,x+'(',v,n);
    if(close<open)
    ab(open,close+1,x+')',v,n);

  }

}
  vector<string> generateParenthesis(int n) {
//string x='';
std::vector<string> v;
     ab(0,0,"",v,n);
    return v;
  }
int main()
{
  int cas;
  cin>>cas;
  std::vector<string> v=generateParenthesis(cas);
  for(int i=0;i<v.size();i++)
  cout<<v[i]<<endl;
}
