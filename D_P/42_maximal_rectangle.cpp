#include<iostream>
#include<stack>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int histo_area(vector<int> &v)
{
stack<int> s;
int i=0,n,tp;
n=v.size();
int mx=INT_MIN;
while(i<n)
{
    if(s.empty()||v[i]>=v[s.top()])
    {
        s.push(i++);
    }
    else
    {
        tp=s.top();
        s.pop();
        int area=s.empty() ? i*v[tp]:v[tp]*(i-s.top()-1);
         mx=max(mx,area);
    }
}
    while(!s.empty())
    {

        tp=s.top();
        s.pop();
        int area=s.empty() ? i*v[tp]:v[tp]*(i-s.top()-1);
         mx=max(mx,area);
    }
    if(mx!=INT_MIN)
    return mx;
    return 0;
    



}

int maximalRectangle(vector<vector<char>>& matrix) {
     vector<vector<int>> v(matrix.size(),vector<int>(matrix[0].size(),0));
 int n=matrix.size();
 int m=matrix[0].size();
  // cout<<"asfdasd";
  for(int j=0;j<m;j++)
  {
      if(matrix[0][j]=='1')
            v[0][j]=1;
            
  }
    for(int i=1;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
        if(matrix[i][j]=='1')
        v[i][j]=++v[i-1][j];
        else
        {
            v[i][j]=0;
        }
        
  //  cout<<v[i][j]<<" ";
    }
    //cout<<"\n";
    }
int mx=INT_MIN;
for(int i=0;i<n;i++)
{
mx=max(mx,histo_area(v[i]));
cout<<mx<<" ";
}
if(mx!=INT_MIN)
return mx;

    return 0;
    }
    int main()
    {
     vector<vector<char>> matrix={
         {'1','0','1','0','0'},
          {'1','0','1','1','1'},
           {'1','1','1','1','1'},
            {'1','0','0','1','0'},
        
     };
   //  cout<<"af";
    cout<<maximalRectangle(matrix);
//cout<<"asf";

    }