#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<vector<string>> suggestedProducts(vector<string>& p, string w) {
    sort(p.begin(),p.end());
    vector<vector<string>> ans;
    for(int i=1;i<w.size();i++)
    {
      vector<string> as;
      string x=w.substr(0,i);
//cout<<x<<"  ";
      auto fs=lower_bound(p.begin(),p.end(),x);
      //cout<<*fs<<" "<<x<<"  ";
      for(auto i=fs;i<fs+3&&i<p.end();i++)
      {

        string s1=*i;
      //  cout<<s1<<"  "<<x<<" - \n";
        if(s1.find(x)!=string::npos)
        as.push_back(s1);
        else
        break;
}//       cout<<endl;
ans.push_back(as);
    }
    return ans;
}
int main()
{
vector<string> products={"mobile","mouse","moneypot","monitor","mousepad"};
string s="mouse";
vector<vector<string>> v=suggestedProducts(products,s);
for(int i=0;i<v.size();i++)
{
  for(auto j:v[i])
  cout<<j<<" ";
  cout<<endl;
}
}
