#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int A,B;
        cin>>A>>B;
        int x;
        x = abs(A-B);

        if (x%2==1)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}