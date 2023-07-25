#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    { 
        long long int mon;
        cin>>mon;
        int e=2*mon;
        int s[e];
        for (int i = 0; i < e; i++)
        {
          cin>>s[i];
        }
        map<int , int >m;
      
        int ct=0;
      for(int i=0;i<e;i++){
        m[s[i]]++;
      }
        for (int i = 0; i < e; i++)
        {
           if (m[s[i]]>2)
           {
            ct++;
           }
           
        else{
             ct+=0;
        }
        
           
        } if (ct>0)
           {
           cout<<"No"<<endl;
           }
           
        else{
              cout<<"Yes"<<endl;

        }}
}