#include <bits/stdc++.h>
using namespace std;

   void lund() { 
        int pc;
        cin>>pc;
        string s;
        cin>>s;
        map<char,int>s1;
        for (int i:s)
        {
            s1[i]++;
        }
        for (auto i:s1)
        {
           if(i.second>1){
            cout<<pc-2<<endl;
            return;
           }
        }
        
        cout<<"-1"<<endl;

           
        }
        int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--){
        lund();
    }
}