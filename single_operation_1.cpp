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

        int ct =0;
        for (int i = 0; i < n; i++)
        {
            if ( s1[i] == '1')
            {
                ct++;
            }
            else
            {
                break;
            }
            
        }
        cout<<ct<<endl;
    }
}