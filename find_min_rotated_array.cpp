 #include<bits/stdc++.h>
 using namespace std;   
    int search(int l,int r,vector<int>& v)
    {
    //    cout<<l<<"  "<<r<<"\n";
     int mid=l+(r-l)/2;
     if(v[mid]>v[mid+1])
        return mid+1;
     
     if(v[l]<v[r])
        return l;
    if(v[mid]>v[r])
        return search(mid,r,v);
    if(v[mid]<v[l])
        return search(l,mid,v);


       // return l;
        
        
    }
    int findMin(vector<int>& v)
    {
    int k=search(0,v.size()-1,v);
      //  cout<<k;
        return v[k];
    }
    int main()
    {
    vector<int> a={3,2,1};
    cout<<findMin(a);
    }