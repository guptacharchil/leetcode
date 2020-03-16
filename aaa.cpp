#include<bits/stdc++.h>
using namespace std;
string longestPalindrome(string s) {
       if(s.length()==0)
return "";
if(s.length()==1)
return s;
string max1="";

int n=s.length();
//cout<<n;
//cout<<s;

     for(int i=1;i<n;i++)
     {
     string tem="";
       int k=1;
 ///       cout<<"---------------------------------------"<<endl;
     while(s[i-k]==s[i+k]&&i-k>=0&&i+k<n)
     {


    // cout<<s[i-k]<<"        --    "<<s[i+k]<<endl;
     tem=s.substr(i-k,2*k+1);
     //tem=2*k+1;
     //cout<<i<<"    "<<k<<"   "<<tem<<"    "<<s.substr(i-k,i+k+1)<< endl;
     k++;
     }


     if(max1.length()<tem.length())
     max1=tem;
     }
     cout<<max1<<endl;
     for(int i=1;i<n;i++)
     {
     string tem="";
     int k=0;
     while(s[i-k-1]==s[i+k]&&i-k-1>=0&&i+k<n)
     {

     tem=s.substr(i-k-1,2*k+2);
     k++;
     }
     if(max1.length()<tem.length())
     max1=tem;
     }

     cout<<max1<<endl;
if(max1.length()<=1)
{
return s.substr(0,1);
}
return max1;

   }
int main()
{
string x;
cin>>x;
cout<<longestPalindrome(x);
}
