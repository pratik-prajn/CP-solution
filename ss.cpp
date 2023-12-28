#include<bits/stdc++.h>
#include <string>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
         int num;
        cin >> num;
        //cout<<num;
        string strin;
        cin >> strin;
        int a = 0;
        //cout<<num;
        set<char> st;
        for (auto ch:strin)
        {
            st.insert(ch);
            a+=st.size();
        }
cout<<a<<endl;   
    }
}