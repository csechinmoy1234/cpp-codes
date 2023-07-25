#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int a,b,c;
        cin>>a>>b>>c;int f;
        if(a%2==0){
         f= (a/2)*b+(a/2)*c;
        }
         else{
           f=(a/2)*b+((a/2)+1)*c;
         }  
         cout<<f<<endl;
        }
        }
