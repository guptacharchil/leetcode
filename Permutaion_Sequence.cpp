#include<bits/stdc++.h>
using namespace std;
string getPermutation(int n, int k) {
      char x[n];
        for(int i=1;i<=n;i++)
        {
            x[i-1]=i;
        //cout<<x[i-1];
        }
        cout<<x;
        for(int i=0;i<pow(2,n);i++)
        {
            if(k==i+1)
                return x;
           // next_permuatation(x.begin(),x.end());
            next_permutation(x,x+n);
        } //return x;
    }
int main()
{       
        int cas,k;
      cin>>cas>>k;
    getPermutation(cas,k);
} 