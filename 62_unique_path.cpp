#include<iostream>
using namespace std;
int mx=0;
int uniquePaths(int m, int n) {

if(m==1&&n==1)
    return 1;
    if(m<1||n<1)
        return 0;
        else{
  mx=uniquePaths(m-1,n)+uniquePaths(m,n-1);
}
    return mx;
}
int main()
{
  cout<<uniquePaths(7,3);
}
