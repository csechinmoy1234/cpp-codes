#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
        int q,w,e,r,t;
        cin>>q>>w>>e>>r;
        t = abs(q-e) + abs(w-r);
        
        if (t%2==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
        }
