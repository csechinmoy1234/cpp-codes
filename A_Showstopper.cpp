#include <bits/stdc++.h>
using namespace std;

void chin()
{
    int pc;
    cin >> pc;
    vector<int> a;
    vector<int> b;bool ans=true;
    
    for (int i = 0; i < pc; i++)
    {
        int g;
        cin >> g;
        a.push_back(g);
    }
    for (int i = 0; i < pc; i++)
    {
        int h;
        cin >> h;
        b.push_back(h);
    }
    for (int i = 0; i < pc-1; i++)
    {
   if(a[i]<=a[pc-1] && b[i]<=b[pc-1] || a[i]<=b[pc-1] && b[i]<=a[pc-1]){
    continue;
   }
      else{
        ans=false;
        break;
      }
    }
    
   
    if (ans)
    {
        cout << "Yes" << endl;
       
    }
   else{
    cout << "No" << endl;
   }
}
int main()
{
    int alexa;
    cin >> alexa;
    while (alexa--)
    {
        chin();
    }
}
