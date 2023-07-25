#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        string s4,s5;
        cin>>s4>>s5;

        if (s4==s1 || s5==s1 )
        {
            cout<<s1<<endl;
        }
        else 
        {
           if (s4==s2 || s5==s2)
           {
            cout<<s2<<endl;
           }
           else{
            cout<<s3<<endl;
           }
           
        }
        
    }
}