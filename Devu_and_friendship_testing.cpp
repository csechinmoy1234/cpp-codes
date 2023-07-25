#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
        long long int n;
        cin>>n;
        int ct=0;
       int v[n];
        for (int i = 0; i < n; i++)
        {   
           cin>>v[i];
        }
       set<int>s;
       for (int i = 0; i < n; i++)
       {
        s.insert(v[i]);
       
       }
       cout<<s.size()<<endl;
        
        }
        }
