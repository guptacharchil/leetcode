#include<bits/stdc++.h>
using namespace std;
bool mysort(string a,string b)
{
  if(a.length()<b.length())
  return true;
  if(a.length()==b.length())
  return a<b;
  return false;

}
string longestWord(vector<string>& words) {
    sort(words.begin(),words.end(),mysort);

    string x;
    int mx=0;
    if(words[0].size()!=1)
    return x;
    map<string,int> mp;
    for(int i=0;i<words.size();i++)
    {
      mp[words[i]]=mp[words[i].substr(0,words[i].length()-1)]+1;
      if(mx<mp[words[i]]&&mp[words[i]]==words[i].length())
      {
        mx=mp[words[i]];
        x=words[i];
      }
    }
    return x;

}
int main()
{
vector<string> a={"a", "banana", "app", "appl", "ap", "apply", "apple"};
cout<<longestWord(a);
}
