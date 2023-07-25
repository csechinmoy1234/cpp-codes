#include <bits/stdc++.h>
using namespace std;
int main(){
    int alexa;
    cin>>alexa;
    while(alexa--){
        int pc,g,h;
        cin>>pc>>g>>h;
        int ct=0;

        while (pc>0)
        {
            pc=pc/2;
            ct++;
        }
        int f= (ct-1)*g+(ct-2)*h;
        cout<<f<<endl;
    }
}