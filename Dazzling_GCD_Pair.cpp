#include <iostream>
using namespace std;
#define ll long long int
#define vi vector<int>
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
        long long int a,b;
        cin>>a>>b;
        if (abs(b-a)<=1)
        {
          cout<<"-1"<<endl;
        }
        else if (a%2 ==0)
        {
        cout<<a<<" "<<a+2<<endl;

        }
        else if (a%2 != 0)
        {
            if(b-a == 2){
                cout<<"-1"<<endl;
            }
            else if (b-a >2)
            {
               if (a%3 == 0)
               {
                cout<<a<<" "<<a+3;
               }else{
                cout<<a+1<<" "<<a+3;
               }
               
            }
            
        }
        
       
     
       

        }
        }
