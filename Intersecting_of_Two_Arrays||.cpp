#include<bits/stdc++.h>
using namespace std;
 vector<int> intersect(vector<int>& a, vector<int>& b) {
 std::vector<int> z;
set <int> s;   
 for(int i=0;i<a.size();i++)
	{
 	for(int j=0;j<b.size();j++)
 	{
 		if(a[i]==b[j])
 		{
 			s.insert(a[i]);
 			//b.erase(find(b.begin(),b.end(),b[j]));
            //a.erase(find(a.begin(),a.end(),a[i]));
            //i--;
 			//j--;
 			break;
 		}
 	}
 	 set <int, greater <int> > :: iterator itr; 
 for(itr=s.begin();itr!=s.end();itr++)
 	{
 z.push_back(*itr);
//cout<<*itr<<" - ";
 	}
 }
 return z;        
    }
int main()
{
std::vector<int> v={1,2,2,1};
std::vector<int> v1={1,2,2,2};
std::vector<int> x= intersect(v1,v);
cout<<"++++++++++";
for(int i:x)
cout<<i<<"   ";
}
