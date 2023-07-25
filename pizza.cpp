#include <iostream>
using namespace std;
int main(){
    int g;
    cin>>g;
    while (g--)
    {
        int N,X;
        cin>>N>>X;
        int f =(N*X)/4;

        if ((N*X)%4==0)
        {
            cout<<f<<endl;

        }
        else if((N*X)%4!=0)
        {
            cout<<f+1<<endl;
        }
        
    }
    
}