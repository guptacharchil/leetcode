#include<bits/stdc++.h>
using namespace std;

    string getPermutation(string x) {
    
        for(int i=0;i<pow(2,x.length());i++)
        {
          //  if(k==i+1)
                cout<<x;
            next_permutation(x.begin(),x.end());
            
        } //return x;
    }
    int main()
    {
        string x;
        cin>>x;
        getPermutation(x);
    }