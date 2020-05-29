#include<iostream>
using namespace std;
int gett(string s)
{
  return s.find('+');
}
string complexNumberMultiply(string s, string s1) {
int a,b,c,d;
int i=gett(s);
a=stoi(s.substr(0,i));
b=stoi(s.substr(i+1));
c=stoi(s.substr(0,i));
d=stoi(s.substr(i+1));
string ans;
ans=(to_string(a*c-b*d))+"+"+to_string(b*c+a*d)+"i\n";
return ans;
}
int main()
{
  cout<<stoi("-123");
  string a,b;
  cin>>a>>b;
  cout<<complexNumberMultiply(a,b);
}
