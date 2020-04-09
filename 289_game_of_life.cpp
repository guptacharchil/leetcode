#include<iostream>
#include<vector>
using namespace std;
int nab(vector<vector<int>>& a,int i,int j,int n,int m)
{
  int count=0;
  if(i-1>-1&&a[i-1][j]>0)
  count++;
  if(i+1<n&&a[i+1][j]>0)
  count++;
  if(j-1>-1&&a[i][j-1]>0)
  count++;
  if(j+1<m&&a[i][j+1]>0)
  count++;
  if(i-1>-1&&j-1>-1&&a[i-1][j-1]>0)
  count++;
  if(i-1>-1&&j+1<m&&a[i-1][j+1]>0)
  count++;
  if(i+1<n&&j-1>-1&&a[i+1][j-1]>0)
  count++;
  if(i+1<n&&j+1<m&&a[i+1][j+1]>0)
  count++;
return count;



}
void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> v(board.size(),vector<int>(board[0].size(),0));
          vector<vector<int>> ans(board.size(),vector<int>(board[0].size(),0));
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<m;j++)
          {
            v[i][j]=nab(board,i,j,n,m);
            if(v[i][j]==3)
            ans[i][j]=1;
            else if(v[i][j]==2)
            ans[i][j]=board[i][j];
            else
            ans[i][j]=0;
            cout<<ans[i][j]<<" ";
          }
          cout<<"\n";
        }

    }
int main()
{
  vector<vector<int>> v={{0,1,0},{0,0,1},{1,1,1},{0,0,0}};
    gameOfLife(v);
}
