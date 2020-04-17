#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool mysort(pair<int,char> a,pair<int,char> b)
{
return a.first>b.first;
}
 string longestDiverseString(int a, int b, int c) {
vector<pair<int,char>> v;
v.push_back(make_pair(a,'a'));
v.push_back(make_pair(b,'b'));
v.push_back(make_pair(c,'c'));
sort(v.begin(),v.end(),mysort);
for(auto i:v)
cout<<i.first<<"  "<<i.second<<"\n";
return "";
   
    }

int main()
{
cout<<longestDiverseString(1,1,7);
}
