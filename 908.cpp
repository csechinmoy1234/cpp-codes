#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
        int Am ,Bm ,Cm,Tm,A,B ,C;
        cin>>Am>>Bm>>Cm>>Tm>>A>>B>>C;
        if (A+B+C >= Tm && Am<=A  && Bm <= B  && Cm<= C)
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
        
    }
}