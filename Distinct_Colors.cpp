#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
        int l;
        cin>>l;
        int a[l];
        for (int i = 0; i <l ; i++)
        {
            cin>>a[i];
        }
        int f=0;
        for (int i = 0; i < l; i++)
        {
            if (a[i]>f)
            {
                 f=a[i];
            }
           
        }
        cout<<f<<endl;
           
        }
        }
