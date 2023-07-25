#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int a,b,c;
        cin>>a>>b>>c;
        if(((abs(a-c))%2)==0 && a==b && c>a){
            cout<<(c-a)/2<<endl;
        }
        else if(((abs(b-c))%2)==0 && a==c && b>a){
            cout<<(b-c)/2<<endl;
        }
         else if(((abs(a-b))%2)==0 && c==b && a>b){
            cout<<(a-c)/2<<endl;
        }  
        else if(a==b && b==c){
            cout<<"0"<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
        }
        }
