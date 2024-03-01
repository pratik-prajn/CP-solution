#include <bits/stdc++.h>
#define ll long long int
#define pii pair<int,int>
#define vpi vector<pair<int,int>>
#define vi vector<int>

#define pb push_back
#define bgn begin()
#define end end()
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
        vi v1;
        vi v2;
        for(int i=0;i<n;i++)
        { 
          ll x;
          cin>>x;
          v1.pb(x);
        }
        for(int i=0;i<m;i++)
        { 
          ll y;
          cin>>y;
          v2.pb(y);
        }

        sort(v1.bgn,v1.end);
        sort(v2.bgn,v2.end);

        ll t=k/2;

        for(int i=0;i<n;i++){
          if(v1[i]<=k){
            
          }
        }
    }

}