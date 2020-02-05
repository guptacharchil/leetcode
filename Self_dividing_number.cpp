 #include<bits/stdc++.h>
 using namespace std;
 int cheack(int x)
    {
        int n=x;
        while(n>0)
        {
            int t=n%10;
            if(t!=0&&(x%t)!=0){
                return 0;
                break;
                      
            }
              n=n/10;
        }
        return 1;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector <int> v;
        for(int i=left;i<=right;i++)
        {
            if(cheack(i))
                v.push_back(i);
        }
        return v;
    }
    int main()
    {
    vector <int> v=selfDividingNumbers(1,22);
    for(int i:v)
   cout<<i<<"  ";
    }