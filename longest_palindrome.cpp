#include<iostream>
#include<string>
using namespace std;
    int longestPalindrome(string s) {
     int a[128]={0};
        for(int i=0;i<s.length();i++)
        {
            a[(int)s[i]]++;
        }
        
        int sum=0;
        for(int i=0;i<128;i++)
        {
          
                //sum+=a[i];
                int k=a[i]/2;
                sum+=k*2;
        
        }
        if(s.length()==sum)
        {
            return sum;
        }
        return sum+1;

    }
    int main()
    {
        string x;
        cin>>x;
        cout<<longestPalindrome(x);
    }