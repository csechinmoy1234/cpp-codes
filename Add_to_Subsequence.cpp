#include <iostream>
using namespace std;
int main(){
// {
//     int t;
//     cin>>t;
//     while (t--)
//     { int f;
//       cin>>f;
      
//         }
int t;
cin>>t;
while(t--){
    long long n;
    int i;
    cin>>n;
    long long a[n];
    for( i=0;i<n-1;++i){
        cin>>a[i];
    }
     int count=0;
        for( i=0;i<n-1;i++){
        if(a[i]%2==0) {
            count++;
        }
       
    }
    
    cout<<count<<endl;

}}