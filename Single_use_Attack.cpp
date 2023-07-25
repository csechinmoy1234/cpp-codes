#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alexa;
    cin >> alexa;
    while (alexa--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(b>c){
            cout<<ceil(a/(b*1.0))<<endl;
        }
        else{
            a=a-c;
            cout<<ceil(a/(b*1.0))+1<<endl;
        }
    }
}
