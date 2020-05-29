#include<bits/stdc++.h>
using namespace std;
vector<int> dailyTemperatures(vector<int>& t) {
  int n=t.size();
  vector<int> ans(n,0);
  stack<int> st;
  for(int i=0;i<n;)
  {
    if(st.empty())
    {
      st.push(i);
      i++;
    }
    else
    {
      if(t[st.top()]<t[i])
      {
        ans[st.top()]=i-st.top();
        st.pop();

      }
      else
      {
        st.push(i);
        i++;
      }
    }
  }
  return ans;
}
int main()
{
  vector<int> v={1,1,1,1,1,1};
  vector<int> ans=dailyTemperatures(v);
  for(auto i:ans)
  cout<<i<<" ";
}
