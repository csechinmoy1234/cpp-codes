#include <bits/stdc++.h>
using namespace std;

int chin(int h){
   
    int s=0;
    while(h>0)
    {
        s+=h%10;
        
        h=h/10;

    }
    // if(s%2==0 && b%10==0)
    // {
    //     cout<<b+2<<endl;
    // }
   
    // else{
    //    cout<<b+1<<endl;
    // }
    return s;
    
}



int main()
{  
  int chini;

  cin>>chini;
  
  while(chini--){int g;
  cin>>g;
     if(chin(g)%2 == chin(g)%2+1 )
    {
        cout<<g+2<<endl;
    }
   
    else{
       cout<<g+1<<endl;
    }
    
  }

        }