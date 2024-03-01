#include <bits/stdc++.h>
#define ll long long int
#define pii pair<int,int>
#define vpi vector<pair<int,int>>
#define vi vector<int>
#define map map<ll,ll>
#define pb push_back
#define bgn begin()
#define end end()
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
using namespace std;





bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int x = 1;
    for (int i = 0; i < n; i += 2) a[i] = x++;
    for (int i = 1; i < n; i += 2) a[i] = x++;
    cout << a << endl;
}






int main() {
    

  
    ll x;
    cin>>x;
    vi v;
    for (int i=0;i<x;i++)
    {
        ll n;
        v.pb(n);

    }

    
    
    vector<vi>res;
    vi sub;
    dfs(0,v,res,sub);
   
    
}

