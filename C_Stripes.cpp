#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        string a;
        int f=0;
        for (int i = 0; i < 8; i++)
        {
            cin>>a;
            if(a=="RRRRRRRR"){
                f=1;}
        }
        if (f)
        {
            cout<<"R"<<endl;
        }
        else{
             cout<<"B"<<endl;
        }
        
           
        }
        }
