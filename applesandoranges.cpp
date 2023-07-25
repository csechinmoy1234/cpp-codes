#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;int min=0;
        for (int i = 1; i < b; i++)
        {
            if (a%i==0 && b%i==0)
            {
                min=i;
            }
            
        }
        
        cout<<min<<endl;
    }
    
}