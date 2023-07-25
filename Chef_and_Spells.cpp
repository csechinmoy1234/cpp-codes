#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {  int a,b,c;
    cin>>a>>b>>c;
    if ((a+b)>(a+c) && (a+b)>(b+c) )
    {
       cout<<a+b<<endl;
    }
    else if ((a+b)<(a+c) && (a+c)>(b+c))
    {
        cout<<a+c<<endl;
    }
    else{
         cout<<b+c<<endl;
    }
       
        }
        }
