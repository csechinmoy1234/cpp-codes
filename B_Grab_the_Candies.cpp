#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int c;
        cin>>c;
        int a[c];int ct=0;int cf=0;
        for (int i = 0; i < c; i++)
        {
            cin>>a[i];
        }
         for (int i = 0; i < c; i++)
        {
           if(a[i]%2==0){
            ct+=a[i];
           }
           else{
            cf+=a[i];
           }
        }
        if(ct>cf){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }   
        }
        }
