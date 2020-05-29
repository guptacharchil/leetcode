#include<iostream>
#include<vector>
void solve(vector<vector<char>>& v,int i,int j,int n,int m)
{
if(i<0||i>=n||j<0||j>=m)
return ;
if(v[i][j]=='X')
v[i][j]='.';
else{
  return ;
}
solve(v,i+1,j,n,m);
solve(v,i-1,j,n,m);
solve(v,i,j+1,n,m);
solve(v,i,j-1,n,m);
}
int countBattleships(vector<vector<char>>& v) {
int c=0;
int n=v.size();int m=v[0].size();
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        if(v[i][j]=='X')
        {
            c++;
       solve(v,i,j,n,m);
      }

    }
  }
int main()
{
  vector<vector<char>> v={{'x','.','.','x'},{'.','.','.','x'},{'.','.','.','x'}};
  cout<<countBattleships(v);
}
