#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    v.push_back(x);
   }

   sort(v.begin(),v.end());

double suum;

   for(int i=0;i<n;i++)
   {
    if (i%2==0)
    {
        suum+=3.1415926536*(v[i]*v[i]);
    }
    else{
        suum-=3.1415926536*(v[i]*v[i]);
    }
   }

   cout<<abs(suum);
}