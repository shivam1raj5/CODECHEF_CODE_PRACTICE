#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--){
	    int a1,b1,c1;
	    cin>>a1>>b1;
	    c1=a1-b1;
	    if(c1<0){
	        cout<<c1*(-1)<<endl;
	    }
	    else{
	    cout<<c1<<endl;
	    }
	}
	return 0;
}
