#include<bits/stdc++.h>
using namespace std;
int target_sum(vector<int> &a,int t)
{
  sort(a.begin(),a.end());
  int n=a.size();
  int table[n][t+1]={0};
  for(int i=0;i<n;i++)
  table[i][0]=1;
for(int j=1;j<=t;j++)
{
  if(j==a[0])
  table[0][j]=true;
  else{
    table[0][j]=0;
  }
}
  for(int i=1;i<n;i++)
  {
    for(int j=1;j<t+1;j++)
    {
      if(j<a[i])
      table[i][j]=table[i-1][j];
      else{
        if(j==a[i])
        table[i][j]=1;
        else
        if(table[i-1][j]||table[i-1][j-a[i]])
        table[i][j]=1;

      }
    //  cout<<table[i][j]<<" ";
    }
    //cout<<"\n";
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=t;j++)
    cout<<table[i][j]<<" ";
    cout<<"\n";
  }
return table[n-1][t];
}
int solve(vector<int>& a)
{
  int sum=accumulate(a.begin(),a.end(),0);
  if(sum%2==1)
  return 0;
  sum=sum/2;
  return target_sum(a,sum);

}
int main()
{
  vector<int>a={2,3,7,8,10};
  cout<<solve(a);
}
