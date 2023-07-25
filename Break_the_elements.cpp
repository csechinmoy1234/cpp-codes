#include <iostream>
using namespace std;
int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     { 
//         int f;
//         cin>>f;
//         int a[f];
//         int ct =0;
//         for (int i = 0; i < f-1; i++)
//         {
//             cin>>a[i];
           
            
//         }
        
//         }
// }
{
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
    for( i=0;i<n;++i){
        cin>>a[i];
    }
     int count=0;
        for( i=0;i<n;i++){
        if(a[i]%2==0) {
            count++;
        }
        }
        if (count==n)
       {
        cout<<0<<endl;
       }
       else{
         cout<<count<<endl;

       }
    
    

}}