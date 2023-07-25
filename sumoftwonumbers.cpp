#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    while (x--)
    {
        string q , w;
        cin>>q>>w;
        int g =0;
        int h = q.size() - 1;
        int f =0;
        int z = w.size() - 1;
        if (h>g && z>f)
        {
            if (q[h]==q[g] && w[z] == w[f])
            {
                cout<<"YES"<<endl;
            }
            
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    

}