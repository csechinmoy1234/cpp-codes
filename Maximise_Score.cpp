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
        vector<int>aloo;vector<int>motor;
        for (int i = 0; i < p; i++)
        {
            int k;cin>>k;
            aloo.push_back(k);
        }
       int ans=INT_MAX;int f=0;
       for (int i = 0; i < p; i++)
       {
        if(i+1<p){
           f=max(f,abs(aloo[i+1]-aloo[i]));
        }
         if(i-1>=0){
            f=max(f,abs(aloo[i-1]-aloo[i]));
        }
        ans=min(ans,f);
       }
       
        cout<<ans<<endl;
           
        }
        }
