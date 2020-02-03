#include<bits/stdc++.h>
using namespace std;
vector<int> findAnagrams(string s, string p) {
  int a[26]={0};
  //int b[26]={0};
std::vector<int> v;
  int c=0;
  for(int i=0;i<p.length();i++)
  {
  //  a[(int)p[i]-'a']++;
    c+=(int)p[i]*(int)p[i];
  }
  for(int i=0;i<s.length();i++)
  {int cc=0;
    for(int j=i;j<i+p.length();j++)
    {
      cc+=(int)s[j]*(int)s[j];
    }
    if(cc==c)
    {
    v.push_back(i);
    }
  }

return v;

}
int main()
{
  string s,s1;
  cin>>s>>s1;
  std::vector<int> v=findAnagrams(s,s1);
  for(int i=0;i<v.size();i++)
  cout<<v[i]<<"   "<<"\n";
}
