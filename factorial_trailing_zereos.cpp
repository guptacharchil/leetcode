#include<bits/stdc++.h>
using namespace std;
 int trailingZeroes(int n) {
        int cn=0;
        while(n>0)
        {
            cn+=n/5;
            n=n/5;
        }
    }
    int main()
    {
        int cas;
        cin>>cas;
        cout<<trailingZeroes(cas);
    }