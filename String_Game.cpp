#include<bits/stdc++.h>
 using namespace std;
 int main()
{  int ola;
cin>>ola;
while (ola--)
{
     int k;
    cin>>k;
    string s;
    
      cin>>s;
      int ct=0;
      map<char , int >m;
      
        
      for(int i=0;i<s.length();i++){
        m[s[i]]++;
      }
      for (int i = 0; i < k; i++)
      {
        if (m[s[i]] %2==0)
        {
         ct++;
        }
        else{
         ct+=0;
        }
      }
      if(ct==(k)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
        
          
        }
}
 
          
            
