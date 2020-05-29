#include<bits/stdc++.h>
using namespace std;
int minAreaRect(vector<vector<int>>& points) {
if(points.size()<4)
return 0;
int mn=INT_MAX;
int n=points.size();
sort(points.begin(),points.end());
for(int i=0;i<n;i++)
{
  for(int j=i+1;j<n;j++)
  {
    for(int k=j+1;k<n;k++)
    {
      for(int l=k+1;l<n;l++)
      {
        if(points[i][0]==points[j][0]&&points[i][1]==points[k][1]&&points[i][0]!=points[l][0]&&points[i][1]!=points[l][1]&&points[k][0]==points[l][0]&&points[k][1]==points[i][1]&&points[j][0]==points[i][0]&&points[j][1]==points[l][1]&&points[l][0]==points[k][0]&&points[l][1]==points[j][1])
{
            cout<<points[i][0]<<" "<<points[i][1]<<"  "<<points[j][0]<<" "<<points[j][1]<<"  "<<points[k][0]<<" "<<points[k][1]<<"  "<<points[l][0]<<" "<<points[l][1]<<endl;
  int area=(points[k][0]-points[i][0])*(points[j][1]-points[i][1]);
  mn=min(mn,area);
}
        }
    }
  }
}
    if(mn==INT_MAX)
return 0;
  return mn;
}
int main()
{
vector<vector<int>> a={{0,1},{1,3},{3,3},{4,4},{1,4},{2,3},{1,0},{3,4}};
cout<<minAreaRect(a);
}
