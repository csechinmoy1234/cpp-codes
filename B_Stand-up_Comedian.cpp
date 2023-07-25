#define ll long long int

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll g=a;ll i=a;
        ll j=a;ll sum;
        while ( b>0 || c>0 || d>0)
        {
            if(g>0 && b>0 ){
                sum=min(b,g);
                g-=sum;
                i+=sum;
                j+=sum;
                b-=sum;
            }
            else if (i>0 && c>0)
            {
                sum=min(i,c);
                i-=sum;
                g+=sum;
                j+=sum;
                c-=sum;
            }

            else if (g>0 && i>0 && d>0)
            {
                sum=min(d,min(g,i));
                j+=sum;
                g-=g;
                i-=sum;
                d-=sum;
            }
            else{
                if(b!=0 || c!=0 || d!=0){
                    j++;
                    break;
                }
            }
            cout<<j<<endl;
    
        }
        
        
           
        }
        }
