#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        long long int mon,l;
        cin>>mon>>l;
         int s[mon];
         int ct=0;
         for (int i = 0; i < mon; i++)
         {
            cin>>s[i];
         }
          for (int i = 0; i < mon; i++)
         {
            if(s[i]==l){
                ct++;
            }else{
                ct+=0;
            }
         }
         if (ct>=1)
         {
            cout<<"Yes"<<endl;
         }
         else if(mon=1 && s[0]==l){
             cout<<"Yes"<<endl;
         }
         else{
            cout<<"No"<<endl;
         }
         
        }
        }
