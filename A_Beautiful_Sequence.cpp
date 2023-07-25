#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int pc;
        cin>>pc;
        vector<int>v;int ct=0;
        for (int i = 0; i < pc; i++)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        for (int i = 0; i < pc; i++)
        {
           if(v[i]<=i+1){
            ct++;
           }
        }
        if(ct>0){
            cout<<"YES"<<endl;
        }
           else{
            cout<<"NO"<<endl;
           }
        }
        }
