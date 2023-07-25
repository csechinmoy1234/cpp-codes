#include <bits/stdc++.h>
using namespace std;

int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        string s;
        cin>>s;int ct=0,cf=0,cn=0,cv=0;
        map<char,int>m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }
        for (auto i:m)
        {
            if(i.second ==1){
                ct++;
            }
            else if(i.second == 2){
                cf++;
            }
            else if(i.second==3){
                cn++;
            }
            else{
                cv++;
            }
        }
        if(ct==4){
            cout<<ct<<endl;
        }
        else if(cf==2 || (cf==1 && ct==2)){
            cout<<"4"<<endl;
        }
        else if(cn==1){
             cout<<"6"<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
        
        
        
           
        }
        }
