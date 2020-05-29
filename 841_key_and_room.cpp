#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
bool canVisitAllRooms(vector<vector<int>>& rooms) {
       queue<int> visited;
       vector<int> v;

       visited.push(0);
       while(!visited.empty())
       {
         int k=visited.front();
         auto pp=find(v.begin(),v.end(),k);
         if(pp==v.end())
         v.push_back(k);
         visited.pop();
      //   cout<<k<<" ";
         for(auto i:rooms[k])
         {
          auto it=find(v.begin(),v.end(),i);
          if(it==v.end())
          {
            visited.push(i);
          }
         }
       }
       for(int i:v)
      cout<<i<<" ";
      return rooms.size()==v.size();
   }
int main()
{
  vector<vector<int>> a={{1,3},{3,0,1},{2},{0}};
  cout<<canVisitAllRooms(a);
}
