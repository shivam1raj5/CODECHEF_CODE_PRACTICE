#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{ int x;
	cin>>x;
	    switch(x % 3){
	        case 0 :
	        cout<<"Normal"<<endl;
	        break;
	        case 1:
	        cout<<"Huge"<<endl;
	        break;
	        case 2:
	        cout<<"Small"<<endl;
	        break;
	    }
	}
	return 0;
}
