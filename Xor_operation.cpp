#include <bits/stdc++.h>
using namespace std;

// int chin(int h){
   
//     int s=0;
//     while(h>0)
//     {
//         s+=h%10;
        
//         h=h/10;

//     }
//     // if(s%2==0 && b%10==0)
//     // {
//     //     cout<<b+2<<endl;
//     // }
   
//     // else{
//     //    cout<<b+1<<endl;
//     // }
//     return s;
    
// }



int main()
{  
  int chini;

  cin>>chini;
  
  while(chini--){
    int f;
    cin>>f;
 string s;
 cin>>s;
 int ct=0;
 for (int i = 0; i < f/2; i++)
 {
   
     if(s[i] != s[f-i-1])
    {
      ct++;
    }
    
   
 }
 
    cout<<(ct/2)+(ct%2)<<endl;
      
        }}