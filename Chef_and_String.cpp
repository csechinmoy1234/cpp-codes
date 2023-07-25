#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
       
        
        string s;
        cin>>s;
        int ct=0;
       
        for (int i = 0; i < s.size(); i++)
        {
            if (s[0]==s[i])
            {
                ct++;
            }
            else
            {
                ct+=0;
            }
            
            
        }
        if(ct==s.size() || s.size()==1 || s.size()==2){
            cout<<"YES"<<endl;
        }
       else
       {
        cout<<"NO"<<endl;
       }
       
        }
}
