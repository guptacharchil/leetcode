 #include <bits/stdc++.h>
#define pb(x) push_back(x);
using namespace std;
 bool canReach(vector<int>& v, int start) {
        std::vector<int> q;
        int n=v.size();
       // cout<<n;
        q.pb(start);
        int i=start;
       int j=0;
        //cout<<"i"<<i;
        while(1)
        {
        	if(j==q.size())
        	{
        		return false;
        	}
        	int pre=q.size();
   			i=q[j];
   			if(v[i]==0)
   				return true;
   			//cout<<i;
        	//int x=v[i];
        //	cout<<n<<"  "<<v[i]<<"\n";
          	if((v[i]+i)<n)
        	{
        	//	cout<<"+\n";
        	if(find(q.begin(),q.end(),v[i]+i)==q.end())
        	{
        		//cout<<i<<endl;
        	//	if(v[i]+i==0)
        	//		return true;
        		q.push_back((v[i]+i));
        	}}
        	if(i-v[i]>=0){
        		//cout<<"-\n";
        	if(find(q.begin(),q.end(),i-v[i])==q.end())
        	{
        		//cout<<i<<endl;
        	//	if(i-v[i]==0)
        	//		return true;
        		q.push_back((i-v[i]));
        		
        	}
        	
        }

        	j++;
        	cout<<"\n";
        	for(int l:q)
        	{
        		cout<<l<<"   ";
        	}
        	cout<<"\n";
        //if(i<n&&i>=0)
        //	return false;
        }

    }
 int main()
 {
 	std::vector<int> v={3,0,2,1,2};
 	cout<<canReach(v,2);
 }