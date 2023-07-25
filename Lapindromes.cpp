#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{  int f;
cin>>f;
while (f--)
{
    string s;
    cin>>s;
    int l = s.size();
    if (l%2 == 0)
    {
        string s1(s,0,l/2);
        string s2(s,l/2,l/2);
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if (s1 == s2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"N0"<<endl;
        }
        
    }
    else
    {
         string s1(s,0,l/2);
        string s2(s,l/2+1,l/2);
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
         if (s1 == s2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"N0"<<endl;
    }
    
   
}

    
        }
}
