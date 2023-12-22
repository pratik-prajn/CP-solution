#include<bits/stdc++.h>
#include <string>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        vector<pair<int,int>>v;

        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        string s;
        cin>>s;
        for (int i=0;i<n;i++)
        {
            
            v.push_back( make_pair(arr[i],s[i]) );
        }
        for (int i=0;i<n;i++)
        {
            if (v[i].first)
        }    
    }
}