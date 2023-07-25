#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        
        if ( d>=(a+b) && e>=c  || d>=(c+b) && e>=a || d>=(c+a) && e>=b)
        {
            cout<<"yes"<<endl;
        }
        
        
        else{cout<<"no"<<endl;

        }
    }}