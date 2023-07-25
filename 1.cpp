#include <iostream>
using namespace std;
int main()
{
 int t ;
cin>>t;
while (t--)
{
  int Xa , Xb , Xc ;
  cin>>Xa>>Xb>>Xc;
  
  if (Xa>Xb && Xa>Xc)
  {
    cout<<"A"<<endl;
  }
  else if (Xa<Xb && Xb>Xc)
  {
    cout<<"B"<<endl;
  }
  else if (Xc>Xa && Xc>Xb)
  {
    cout<<"C"<<endl;
  }
  
   else{
    cout<<"NOTA"<<endl;
   }
   
  }
}
