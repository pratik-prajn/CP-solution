#include <bits/stdc++.h>
#define ll long long int
#define pii pair<int,int>
#define vpi vector<pair<int,int>>
#define vi vector<ll>
#define map map<ll,ll>
#define pb push_back
#define bgn begin()
#define end end()
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
using namespace std;




int divide(ll n){

  while (n % 2 == 0) {
        n /= 2;}

  for(int i=3;i*i<=n;i++){

    if(n%i==0){
      return 1;
      break;
    }

  }

}





int32_t main(){



 ll n,m;
 cin>>n>>m;

 vi v(n);

 for(int i=0;i<n;i++){
    cin>>v[i];
 }


 sort(v.bgn,v.end);


 
  


 






   return 0;
}