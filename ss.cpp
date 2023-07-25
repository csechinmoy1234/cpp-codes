#include<bits/stdc++.h>
using namespace std;
int main(){
    int p;
    cin>>p;
    while(p--){
       int f,n,k;
       cin>>f>>n>>k;
       int l,m,i,c;
       l = f+k;
       m = n-k;
       i = f-k;
       c =n+k;
       if (l == m || i == c || f==n)
       {
        cout<<"YES"<<endl;
       }
       else
       {
        cout<<"NO"<<endl;
       }
       
    }}