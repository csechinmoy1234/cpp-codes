{
    int t;
    cin>>t;#include<iostream>
using namespace std;
int main()
    while (t--)
    {
     string S,T;
     cin>>S>>T;
    
     char M[6];
     for (int i = 0; i < 6; i++)
     {
        if (S[i]==T[i])
        {
            M[i]='g';

        }
        if (S[i]!=T[i])
        {
             M[i]='b';
        }
        
     } 
     for (int i = 0; i < 6; i++)
     {
        /* code */cout<<M[i];
     }
     
     
     

    
}
}