#include<bits/stdc++.h>
using namespace std;


int main()
{
   int t;
    cin>>t;
    while(t--)
    {
       long long int n,m,k;
       cin>>n>>m>>k;
       int x=n/k;
       if (m==0)
       {
        cout<<0<<endl;

       }
       else{
        if (x==1)
        {
            cout<<0<<endl;
        }
        else{
            if (x>=m)
            {
                cout<<m<<endl;
            }
            else{
                
            }
        }
       }
       

    }
}