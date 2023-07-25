#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while (x--)
    { 
       int y;
       cin>>y;
       int w = y/25;
       int f =w+1;
       if (y%25 ==0)
       {
        cout<<w<<endl;
       }
       else{
        cout<<f<<endl;
       }
       
        }
        }
