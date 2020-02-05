#include<bits/stdc++.h>
using namespace std;
int mul(string s,char c)
{
  int x=0;
  int carry=0;
  for(int i=0;i<s.length();i++)
  {
    x+=(carry+((s[i]-'0')*(c-'0'))%10);
    carry=((s[i]-'0')*(c-'0'))/10;
    x=x*10;
  }
  return x/10;
}
string multiply(string a, string b) {
  int m=0;
std::vector<int> v;
for(int i=b.length()-1;i>=0;i--)
{
  m=mul(a,b[i])*pow(10,b.length()-1-i);
v.push_back(m);

}
int sm=0;
for(int i=0;i<v.size();i++)
sm+=v[i];
//cout<<sm;
string g=to_string(sm);
return g;
}
int main()
{
  cout<<multiply("123","99");


}
