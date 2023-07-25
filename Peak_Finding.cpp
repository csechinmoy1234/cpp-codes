#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {  int n;
       cin>>n;
       int arr[n];
      
       for (int i = 0; i < n; i++)
       {
        cin>>arr[i];
       }
      int l = sizeof(arr)/sizeof(arr[0]);
      sort(arr,arr+l);
      cout<<arr[n-1]<<endl;
        }
        }
