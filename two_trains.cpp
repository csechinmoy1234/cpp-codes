#include<bits/stdc++.h>
using namespace std;
int main(){
    int alexa;
    cin>>alexa;
    while(alexa--){
        int hag;
        cin>>hag;
        int g=hag-1;
        int a[g];
        int sum=0;
        int f=0;
        for (int i = 0; i < g; i++)
        {
          cin>>a[i];
        }
        for (int i = 0; i < g; i++)
        {
          sum+=a[i];
        }
          f=a[g-1];
        
        cout<<sum+f<<endl;
    }
}