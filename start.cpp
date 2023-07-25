
#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll p;
        cin>>p;
        ll ct=1;
        ll x=p & (p-1);
        while(x!=0){
            ct++;
            x=x & (x-1);
        }
   if (ct>16)
   {
 cout<<"YES"<<endl;
   }
   else{
cout<<"NO"<<endl;
   }
   
}
   
    }
