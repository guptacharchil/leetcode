#include<bits/stdc++.h>
using namespace std;
int check(int s,int e,int arr[])
{
  for(int i=s;i<e;i++)
  {
    if(arr[i]==1)
    return 0;
  }
  return 1;
}
void add(int s,int e,int a[])
{
  for(int i=s;i<e;i++)
  a[i]=1;
}
void abc(int pr)
{
  int arr[1445]={0};//1445 is highest limit of time
  int arr1[1445]={0};
  int n;
  cin>>n;
  vector<vector<int>> a(n,vector<int>(2));
  for(int i=0;i<n;i++)
  {
    cin>>a[i][0];
    cin>>a[i][1];
  }
  //cout<<endl;
 //sort(a.begin(),a.end());
  string s;
  for(int i=0;i<n;i++)
  {
    int q;
    q=check(a[i][0],a[i][1],arr);
int   q1=check(a[i][0],a[i][1],arr1);
    if(q==1)
    {
      add(a[i][0],a[i][1],arr);
      s=s+"C";
      continue;
    }

    else if(q1==1)
    {
      add(a[i][0],a[i][1],arr1);
      s=s+"J";
    continue;
    }
    else{
      s="IMPOSSIBLE";
break;
    }

  }

    cout<<"Case #"<<pr<<": "<<"IMPOSSIBLE"<<endl;
}

int main()
{
  int cas;
  cin>>cas;
  int i=0;
  while(cas--)
  {
    i++;
    abc(i);
  }
  return 0;
}
