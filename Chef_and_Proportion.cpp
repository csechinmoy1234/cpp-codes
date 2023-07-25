#include <iostream>
using namespace std;
int main()
{
   int w,x,y,z;
   cin>>w>>x>>y>>z;
   if (w*x == y*z || w*y == x*z || w*z==x*y)
   {
    cout<<"Possible"<<endl;

   }
else
{
    cout<<"Impossible"<<endl;
}
   

        }
