#include<bits/stdc++.h>
using namespace std;
int longestCommonSubsequence(string a, string b) {
      int n=a.length();
      int m=b.length();
      int mx[n+1][m+1]={0};
    for(int i=0;i<=n;i++)
    for(int j=0;j<=m;j++)
    mx[i][j]=0;
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=m;j++)
          {
              if(a[i-1]==b[j-1])
              {
                  mx[i][j]=max(mx[i-1][j-1]+1,max(mx[i-1][j],mx[i][j-1]));
              }
              else
              {
                  mx[i][j]=max(mx[i-1][j],mx[i][j-1]);
              }
            //  cout<<mx[i][j]<<"   ";
              
          }
      }  
       int k=mx[n][m];
       //cout<<k<<"  k ";
       return mx[n][m];
    }
int main()
{
string x,y;
cin>>x>>y;
cout<<longestCommonSubsequence(x,y);
}