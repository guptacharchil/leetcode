#include<bits/stdc++.h>
using namespace std; 
vector<string> split(string A)
{
	std::vector<string> a;
	istringstream ss(A); 
  
    // Traverse through all words 
    do { 
        // Read a word 
        string word; 
        ss >> word; 
  a.push_back(word);
        // Print the read word 
 //       cout << word << endl; 
  
        // While there is more to read 
    }while (ss);
return a;
}   
    vector<string> uncommonFromSentences(string A, string B) {
    //    string a[]=A.split(" ");
      
      //  string b[]=B.split(" ");
       vector<string>a,b;
       a=split(A);
       b=split(B);
        map<string,int> m;
         
        

    for(string i:a)
    	m[i]++;
    for(string i:b)
    	m[i]++;
        std::vector<string> v;
        for(auto i=m.begin();i!=m.end();i++)
        {
        	if(i->second==1)
        		v.push_back(i->first);
        }
        return v;

    }
    int main()
    {
    	string a,b;
    	cin>>a;
    	cin>>b;
    	std::vector<string> v =uncommonFromSentences(a,b);

    }