#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()

{
    int pc;
    cin >> pc;
    int a[pc];
    
    ll ct = 1;
    ll sum = INT_MIN;
    if(pc==1){
        cout<<"1"<<endl;

    }
    else{
     for (int i = 0; i < pc; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < pc - 1; i++)
    {
        if (a[i] <= a[i+1])
        {
            ct++;
        }
        else
        {
            ct = 1;
        }
        sum=max(sum,ct);
    }
   
    cout << sum;
}
}