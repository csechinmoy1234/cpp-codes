
#include <bits/stdc++.h>
using namespace std;
 

int funk(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}



int sF(int *arr, int n)
{
 
    
    int s = 0,i;
    for (i = 0; i < n; i++)
    {
 
        
        s += funk(arr[i]);
    }
    return s;
}


void solve(){
{   int n;
    cin>>n;
    int arr[n] ;
    for (int i = 0; i < n ; i++)
    {
       cin>>arr[i];
    }
    
    
    cout <<( sF(arr, n))%(10^9+7)<<endl;
    
}}
int main(){
    int haha;
    cin>>haha;
    while(haha--){
         solve();
    }
}