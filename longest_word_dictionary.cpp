 #include<bits/stdc++.h>
using namespace std;
bool mysort(string a,string b)
{
	if(a.length()==b.length())
	{
		return a<b;
	}
	return a.length()>b.length();

}

	bool valid(string x,string b)
   	{
   		int i=0;
   		int j=0;
   		int n=x.length();
   		int m=b.length();
   		while(1)
   		{
   			if(x[i]==b[j])
   			{
   				i++;
   				j++;

   			}
   			else
   				i++;

   			if(j==m)
   				return true;
   			if(i==n)
   				return false;
   		}
   		return false;
   	}

 string findLongestWord(string s, vector<string>& v) 
 	{	


    	//sort(v.begin(), v.end());
    	sort(v.begin(), v.end(),mysort);
    for(string i:v)
    	{//cout<<i<<":";
    		if(valid(s,i))
    			return i;
    	}
    	return "";
   	}


  int main()
  {
  	std::vector<string> v={"ale","apple","appel","monkey","plea"};
  cout<<findLongestWord("abpcplea",v);
  }