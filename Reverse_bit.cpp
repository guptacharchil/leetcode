#include<bits/stdc++.h>
using namespace std;
uint32_t reverseBits(uint32_t n)
{
int a[32]={0};
int i=0;
while(n>0)
{
a[i]=n%2;
n=n/2;
i++;
}
int k=1;
int sum=0;
for(int i=31;i>=0;i--)
{
sum=sum+k*a[i];
k=k*2;
}
return sum;
}
int main()
{
    uint32_t cas;
    cin>>cas;
   // int a[]=reverseBits
    cout<<reverseBits(cas);

}