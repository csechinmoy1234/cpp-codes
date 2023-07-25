#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void babaji()

    
    { 
        ll x, y;
        cin >> x >> y;
        if(x>=y){
            cout<<"0"<<endl;
            return;
        }
        ll a=y-x;
        if (x % 2 == 0)
        {
            if(y%2!=0){
                cout<<(a/2)+1<<endl;
                return;
            }
            cout<<a/2<<endl;
            return;
        }
        else if (x % 3 == 0)
        {
             if((a-3)%2!=0){
                cout<<((a-3)/2)+2<<endl;
                return;
            }
            cout<<((a-3)/2)+1<<endl;
            return;
        }
        else if (x % 5 == 0)
        {
          if((a-5)%2!=0){
                cout<<((a-5)/2)+2<<endl;
                return;
            }
            cout<<((a-5)/2)+1<<endl;
            return;  
        }
        else if(x%7==0)
        {
           if((a-7)%2!=0){
                cout<<((a-7)/2)+2<<endl;
                return;
            }
            cout<<((a-7)/2)+1<<endl;
            return;
            
        }
        else{
             if((a-x)%2!=0){
                cout<<((a-x)/2)+2<<endl;
                return;
            }
            cout<<((a-x)/2)+1<<endl;
            return;
        }
           
        
        }
int main(){
    ll alexa;
    cin>>alexa;
    while(alexa--){
        babaji();
    }
}