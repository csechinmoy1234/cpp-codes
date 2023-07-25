#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int p;
        cin>>p;
        vector<int>v; int ct=0;
        for (int i = 0; i < p; i++)
        {
           int k;
           cin>>k;
           v.push_back(k);
           
        }
        int min=*min_element(v.begin(),v.end());
        for (int i = 0; i < p; i++)
        {
            if(v[i]==min){
                ct++;
            }
        }
        
        if(v.size()==1){
            cout<<"0"<<endl;
        }
       else{
        int f=p-ct;
        cout<<f<<endl;
       }

           
        }
        }
