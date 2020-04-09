#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool mysort(vector<int> a,vector<int> b)
{
    if(a[0]<b[0])
    return true;
    else
    {
        if(a[0]==b[0])
        return a[1]>b[1];
        return false;
    }
    
}
void swap(vector<int> &a,vector<int> &b)
{
    int p,q;
    p=a[0];
    q=a[1];
    a[0]=b[0];
    a[1]=b[1];
    b[0]=p;
    b[1]=q;
}
void print(vector<vector<int>>& people)
{
for(int i=0;i<people.size();i++)
       cout<<people[i][0]<<"  "<<people[i][1]<<endl;
       cout<<endl<<endl;
}
vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),mysort);
     print(people);
    int j=people.size()-1;
    while (people[j][0]==people[j-1][0])
    {
        j--;
        if(j==0)
        return people;
    }
    for(int i=j;i>=0;i--)
    {
       // swap(people[i],people[i+people[i][1]]);
        auto tem=people[i];
        int ll=people[i][1];
        for(int k=0;k<ll;k++)
        {
        people[i+k]=people[i+1+k];
        }
    people[i+ll]=tem;
        print(people);
    }
    
       return people;
    }
    int main()
    {
        vector<vector<int>> a={{7,0},{4,4},{7,1},{5,0},{6,1},{5,2}};
        vector<vector<int>> v=reconstructQueue(a);
       for(int i=0;i<v.size();i++)
       cout<<v[i][0]<<"  "<<v[i][1]<<endl;
    
    }