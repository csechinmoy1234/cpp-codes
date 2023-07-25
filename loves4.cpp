#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ct=0;
        while(n>0){
        int g=n%10;
        if (g==4)
        {
            ct++;
        }
        else{
            ct+=0;
        }
        
        n = n/10;
        }
    cout<<ct<<endl;
    }
}