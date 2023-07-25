#include <bits/stdc++.h>
using namespace std;
		int minSwaps(vector<int>&nums)
	{
	   vector<int>v;int ct=0;
	   for(int i=0;i<nums.size();i++){
	       v.push_back(nums[i]);
	   }
	   sort(v.begin(),v.end());
	   for(int i=0;i<nums.size();i++){
	       if(v[i]!=nums[i]){
	           ct++;
	       }
	   }return ct;
	}
int main()
{
    int alexa;
    cin>>alexa;
    while (alexa--)
    {   vector<int>v;int n;
    cin>>n;int l;cin>>l;
    for (int i = 0; i < n; i++)
    {
       int k;
       cin>>k;
       v.push_back(k);
    }
    
      sort(v.begin(),v.end());
	  cout<<v[l-1]<<endl;
       }
        
        
        }  
        
        
