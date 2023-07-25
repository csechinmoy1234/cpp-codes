#include <bits/stdc++.h>
using namespace std;

int main() {
	int alexa;
	cin>>alexa;
	while(alexa--){
	  vector<int>v;
      for (int i = 0; i < 3; i++)
      {
        int k;
        cin>>k;
        v.push_back(k);
      }
      sort(v.begin(),v.end());
      if (v[2]>v[1]+v[0])
      {
        cout<<"Yes"<<endl;
      }
      else{
         cout<<"No"<<endl;
      }


	   
	
}
}