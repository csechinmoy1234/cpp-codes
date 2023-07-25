#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    while (m--)
    {
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        double f =a/b;
        double g = c/d;
        if (f>g)
        {
            cout<<"chefina"<<endl;
        }
        else if (f<g)
        {
            cout<<"chef"<<endl;
        }
        else
        {
         cout<<"both"<<endl;
        }
        
    }
    
}