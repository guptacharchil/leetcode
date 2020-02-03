#include<bits/stdc++.h>
using namespace std;
bool palindrome(string x,int s,int l)
{
  cout<<x<<"   "<<x[s]<<"   "<<x[l]<<"\n";
  if(s==l)
  return true;
  if(x[s]!=x[l])
  return false;
  if(s<l+1)
   return palindrome(x,s+1,l-1);
  //cout<<x[s]<<"   "<<x[l]<<"\n";

return true;
}
bool palindrome(string x)
{
  bool k=palindrome(x,0,x.length()-1);
  cout<<"value of k"<<k<<endl;
  return k;
}
bool isPalindrome(string s) {
    string x;
     int n=s.length();
         int k;
     for(int i=0;i<n;i++)
     {
       k=s[i];
      if(64<k&&k<91)
      {
        s[i]=k+32;
        x=x+s[i];
        continue;
      }
      if('a'<=s[i]&&s[i]<='z')
      {
      x=x+s[i];
      }

     }
     return palindrome(x);

 }
 int main()
 {
   string s;
   getline(cin,s);
   cout<<isPalindrome(s);
 }
