#include <bits/stdc++.h>
using namespace std;
void chin()
    { 
        long long int a,b,c,d;long long int ct=0;int ans=0;
        cin>>a>>b>>c>>d;
        if(b>d)cout<<"-1"<<endl;
        else{
            ct=abs(b-d);
            ans+=ct;
            a+=ct;
            if(a<c)cout<<"-1"<<endl;
            else{
                ans+=(a-c);
                cout<<ans<<endl;
            }
        }

    }
        int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--){
        chin();
    }
        }
