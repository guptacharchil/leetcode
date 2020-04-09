#include<iostream>
#include<vector>
#include<algorithm>
usinng namespace std;
 void pathInZigZagTree(int l) {
std::vector<int> v;
v.push_back(l);
int h=log2(l);
while(h>0)
{
	int left=pow(2,h-1);
	int right=pow(2,h)-1;
	l=l+(right-l/2);
	v.push_back(l);
	h--;
}
  reverse(v.begin(), v.end());
  return v;
    }
int main()
{
	int x;
	cin>>x;
pathInZigZagTree(x);
}
