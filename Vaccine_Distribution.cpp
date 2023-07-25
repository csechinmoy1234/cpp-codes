#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int c,b;
        cin>>c>>b;
        int a[c];int ct=0;int g=0;
        for (int i = 0; i < c; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < c; i++)
        {
            if (a[i]>=80 || a[i]<=9)
            {
                ct++;
            }
            else{
                ct+=0;
            }
        }
         g=ct/b+(c-ct)/b;
         
        if (ct%b!=0)
        {
            g++;
        }
        else if ((c-ct)%b!=0)
        {
            g++;
        }
        else
        {
           g+=0; 
        }
        cout<<g<<endl;
    }
}