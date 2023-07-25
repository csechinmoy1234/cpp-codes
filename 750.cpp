// #include<iostream>
// using namespace std;
// int main(){
   
//       int R,O,C;
//       cin>>R>>O>>C;
//       int z;
//       z = (20-O);
//       int r;
//       r = 36*z;

//       int f;
//       f = r + C ;
//       if (f>R)
//       {
//         cout<<"YES";

//       }
//       else {
//         cout<<"NO";
      
//     }
// }  
#include <iostream>
using namespace std;

int main() {
	int m;
	cin>>m;
	while(m--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x = y = z){
	        cout<<"ANY"<<endl;
	    }
	    else if(z%x==0 && x<y){
	        cout<<"CHICKEN"<<endl;
	    }
	    else if(z%y==0 && x>y){
	        cout<<"DUCK"<<endl;}
	else  { cout<<"NONE"<<endl;}
	}
	return 0;
}
