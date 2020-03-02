 #include<bits/stdc++.h>
using namespace std;
  int lastStoneWeight(vector<int>& v) {
        while(v.size()>1)
        {
        	sort(v.begin(),v.end(),greater<int>());
        	int a;
        	int b;
        	a=v[0];
        	b=v[1];
        	int c=abs(a-b);
        	v.push_back(c);
        	v.erase(v.begin(),v.begin()+2);
        }
        return v[0];

    }
    int main()
    {
    	std::vector<int> v={2};
   cout<<lastStoneWeight(v);
    }