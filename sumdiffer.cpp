#include<iostream>
using namespace std;
int main(){int n;
cin>>n;
while (n--)
{
    


     long long j,k,l;
    cin>>j>>k>>l;
    long long f = abs(j-k);
    
    if(f % (2*l)==0) {cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}

}
}