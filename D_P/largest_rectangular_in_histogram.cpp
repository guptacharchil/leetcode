#include<iostream>
#include<vector>
#include<climits>
#include<stack>
using namespace std;
int largestRectangleArea(vector<int>& heights)
{
    int mx=INT_MIN;
    stack<int> s;
    int i=0;
   // for(int i=0;i<heights.size();i++)
    while(i<heights.size())
    {
    if(s.empty()||heights[s.top()]<=heights[i])
    {
        s.push(i++);
    }
    else
    {
        int tp=s.top();
       s.pop();
        int  area=heights[tp]*(s.empty()?i:i-s.top()-1);
       mx=max(mx,area);
    }
      
}
int n=heights.size();
        while(s.empty()==false)
    {
        int tp=s.top();
       s.pop();
        int  area=heights[tp]*(s.empty()? i : i-s.top()-1);
       mx=max(mx,area); 
    }  
    

    return mx;
}
int main()
{
    vector<int> a={2,1,5,6,2,3};
    cout<<largestRectangleArea(a);
}