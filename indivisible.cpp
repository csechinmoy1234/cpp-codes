#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
     int a,b,c;
     cin>>a>>b>>c;int x=0;
     for (int i = 2; i < 100; i++)
     {
       if (a%i!=0 && b%i!=0  && c%i!=0)
       {
         x=i;
         break;
       }
       else{
        continue;
       }
     }
     cout<<x<<endl;
     
    }
    
}