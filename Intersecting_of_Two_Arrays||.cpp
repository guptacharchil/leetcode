#include<bits/stdc++.h>
using namespace std;
 vector<int> intersect(vector<int>& a, vector<int>& b) {
 std::vector<int> v;
 set<int> s;
 for(int i=0;i<a.size();i++)
 {
 	for(int j=0;j<b.size();j++)
 	{
 		if(a[i]==b[j])
 		{
 			s.insert(a[i]);
 			b.erase(find(b.begin(),b.end(),b[j]));
            //a.erase(find(a.begin(),a.end(),a[i]));
            //i--;
 			j--;
 			break;
 		}
 	}
 for(auto i=s.begin();i!=s.end();i++)
 	{v.push_back(*i);
cout<<*i<<" - ";
 	}
 }
 return v;        
    }
int main()
{
std::vector<int> v={1,2,2,1};
std::vector<int> v1={2,2};
std::vector<int> x= intersect(v1,v);
for(int i:x)
cout<<i<<"   ";
}
