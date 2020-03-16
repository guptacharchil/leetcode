#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 void pathInZigZagTree(int l) {
    std::vector<int> v;
    while(l>0)
    {
    	v.push_back(l);
    	l=l/2;
    }    
    for(int i:v)
    	cout<<i<<" ";
    }
int main()
{
	int x;
	cin>>x;
pathInZigZagTree(x);
}
