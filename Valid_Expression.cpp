#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int p,c;
        cin>>p>>c;
        int f=p+1;
        if((1-p)<=c && c<=(p+1)){
            if(c<0){
                int h=abs(c)+1;
                int j=p-h;
                while(h--)cout<<"-";
                while(j--)cout<<"*";
                cout<<endl;

            }
            if(c>0){
                 int i=abs(c)-1;
                int j=p-i;
                while(i--)cout<<"+";
                while(j--)cout<<"*";
                cout<<endl;
            }
            if(c==0){
                  int j=p-1;
              
                
                while(j--)cout<<"*";
                cout<<"-";
                cout<<endl;
            }
        }

       
        else {
            cout<<"-1"<<endl;
        }
        
           
        }
        }
