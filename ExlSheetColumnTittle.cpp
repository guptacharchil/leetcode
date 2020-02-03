#include<bits/stdc++.h>
using namespace std;
    string convertToTitle(int n) {
        // sum+=pow(26,n-1-i)*((int)s[i]-(int)'A'+1);
   string x;
    int k=0;
    while(n>0)
    {
        n--;
     x+=('A'+n%26);
    n=n/26;

    }

 reverse(x.begin(),x.end());
 return x;
    }
    int main()
    {
        int cas;
        cin>>cas;
        cout<<convertToTitle(cas);
    }