#include <bits/stdc++.h>
using namespace std;
int fC(int n) {
   int bit_count = floor(log2(n))+1;
   int ones = ((1 << bit_count) - 1);
   return ones ^ n;
}
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        int p,c;
        cin>>p>>c;
        p=~p;
        c=~c;
        int h=p^c;
         cout<<h<<endl;
        
           
        }
        }
