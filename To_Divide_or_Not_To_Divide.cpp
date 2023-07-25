#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
        int a,b,n;
        cin>>a>>b>>n;
        int f=(n/a )*(a);
        if (a%b==0)
        {
           cout<<"-1"<<endl;
        }
        else{
           if (f%a==0)
           {
           if (f%b!=0)
           {
            cout<<f<<endl;
           }else{
            cout<<f+a<<endl;
           }
           
           }
           else{
            	int r = f % a;
				f += a - r;
				if (n%b != 0)
					cout << f << "\n";
				else
					cout << (f + a) << "\n";
           }
           
        }
        }
        }
