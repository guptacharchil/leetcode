#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define pf push_front
#define mod 1000000007
typedef pair<ll, ll> pii;
typedef pair<ll, pii> piii;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<piii> viii;
typedef set<ll> Set;
typedef long long ll;
typedef unsigned long long ull;
typedef long long int lli;
typedef unsigned long long int ulli;


bool isPrime(ll n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    return true;
}

void swap(ll &x, ll &y)
{
    ll temp = x;
    x = y;
    y = temp;
}

bool sortbysec(pii a,pii b)
{
    if(a.first==b.first)
        return a.second < b.second;
    else
        return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    ll ti=0;
    while(t--)
    {
        cout<<"Case #"<<++ti<<": ";
        vii t1,t2;
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll x,y;
            cin>>x>>y;
            t1.pb(make_pair(x,y));
            t2.pb(make_pair(x,y));
        }


        sort(t2.begin(),t2.end(),sortbysec);


        ll cam=0,jam=0;
        bool check=true;
        string s;
        for(ll i=0;i<n;i++)
        {

            if(cam<=t2[i].first)
            {
                cam=t2[i].second;
                s.pb('C');
            }
            else if(jam<=t2[i].first)
            {
                jam=t2[i].second;
                s.pb('J');
            }

            else
            {
                check=false;
                break;
            }

        }


        ll f[n]={0};
        if(check)
        {
            for(ll i=0;i<n;i++)
            {
                for(ll j=0;j<n;j++)
                {
                    if(t1[i]==t2[j] && f[j]!=1)
                    {
                        cout<<s[j];
                        f[j]=1;
                        break;
                    }

                }
            }

        }
        else
            cout<<"Icout<<"Case #"<<pr<<": ";MPOSSIBLE";

        cout<<"\n";
    }
    return 0;
}
