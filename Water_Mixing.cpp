#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
        int c,d,e,f;
        cin>>c>>d>>e>>f;
        int k = c+e;
        int i=c-f;
        if ((c>d) &&  (i<=d))
        {
        
           cout<<"YES"<<endl;
        
         
         
        }
        else if ((c<d)  && (k >=d))
        {
        
           cout<<"YES"<<endl;
        
         
         
        }
        else if(c==d)
        {
            cout<<"YES"<<endl;
        }
        else{
             cout<<"NO"<<endl;
        }
        
        }
        }
