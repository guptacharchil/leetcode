#include<iostream>
#include<vector>
using namespace std;
 vector<int> findDuplicates(vector<int>& a) {
   vector<int> ans;
   for(int i=0;i<a.size();i++)
   {
     a[abs(a[i])-1]=-a[abs(a[i])-1];
     if(a[abs(a[i])-1]>0)
     ans.push_back(abs(a[i]));
   }
   return ans;
 }
int main()
{
vector<int> v={10,2,5,10,9,1,1,4,3,7};
vector<int> vv=findDuplicates(v);
for(int i:vv)
cout<<i<<endl;
}
