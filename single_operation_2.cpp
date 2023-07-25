#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1;
        cin>>s1;
        
        int ct =1;
        for (int i = 0; i < n; i++)
        {
            if ( s1[i] == '1')
            {
                break;
            }
            else
            {
                ct++;
            }
            
        }
        cout<<ct<<endl;
    }
}