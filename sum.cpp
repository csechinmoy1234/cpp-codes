#include<bits/stdc++.h>
using namespace std;
int main(){
   
        int u,h,b;
        cin>>b;
        int ct=0;
        for (int u = 1; u< b; u++)
        {
            for (int h = 0; h < b
            ; h++)
            {
            if (u+h==b)
            {
                ct++;
            }
            
            }
            
        }
        cout<<ct<<endl;
    
    
}