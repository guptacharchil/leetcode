#include<iostream>
#include<climits>
#include<iterator>
#include<set>
#include<queue>
#include<vector>
using namespace std;
int maxLength(vector<string>& arr) {
  vector<string> q;
  int mx=0;
  for(auto i:arr)
  {
  q.push_back(i);

}

  while(q.size()>2)
  {
    string x=q.front();
    int l=x.length();
      mx=max(mx,l);
  auto end=q.end();
    for(auto i=q.begin();i<end;i++)

    {
      string s;
      string g=*i;
      s=x+g;
      set<char> st;
      for(char i:s)
      st.insert(i);
      if(st.size()==s.length())
      {
        q.push_back(s);
      }



    }
    if(q.size()>0)
    q.erase(q.begin());

  }
    return mx;
}
int main()
{
    vector<string> arr={"cha","r","act","ers"};
    cout<<maxLength(arr);
}
