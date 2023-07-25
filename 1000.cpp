#include<bits/stdc++.h>
using namespace std;
int main(){ 
    long long int t;
cin>>t;
while (t--)
{
   long long int n;
   cin>>n;
   string s;
   cin>>s;
   long long int ctz;
   for (int i = 0; i < n; i++)
   
 { 
if ( s[i] !='a' || s [i] !='e' || s[i] !='i' || s[i] !='o' || s[i] !='u')
{
    ctz++;
}
else{
    ctz=0;
    
}
if(ctz == 4){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
break;

}}}