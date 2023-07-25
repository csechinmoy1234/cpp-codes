#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
        int n;
        cin>>n;
        string s,r;
        cin>>s>>r;
        int ct =0;
        int f =0;
        int h=0;
        int g=0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                ct = ct+1;
                
            }else{
                f = f+1;
            }
          
        }
       
          
        
            for (int i = 0; i < r.size(); i++)
        {
            if (r[i] == '1')
            {
                h = h+1;
               
            }else{
              g= g+1;
            }
          
        }
   
        if (ct == h && f==g )
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
        }
