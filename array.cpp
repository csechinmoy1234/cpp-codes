#include<bits/stdc++.h>
using namespace std;

 int main() {
    int z;
    cin>>z;
    while (z--)
    {   int x;
        cin>>x;
        int v[x];
        int p=1;
        for (int i = 0; i < x; i++)
        {
            cin>>v[i];
        }
        for (int i = 0; i < x; i++)
        {
         p *= v[i];
        }
        if (p>=0)
        {
          cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
    
 }      
        
            
        

    
    
