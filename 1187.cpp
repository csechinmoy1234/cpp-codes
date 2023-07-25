#include<bits/stdc++.h>
using namespace std;
int main(){int t;
cin>>t;
while (t--)
{
    

 
{
      int x,y,n,r,a,b;
    cin>>x>>y>>n>>r;
 

    if (r>= (x*n))
   
  {
        /* code */ 
       b = (r-(x*n))/(y-x);
        
       a=b-n;
if (b>n)
        {
         b=n;
         a=0;
      }
        
       cout<<a<<" "<<b<<endl;
    }
    else {
       cout<<"-1"<<endl;
    }

}
}
}
