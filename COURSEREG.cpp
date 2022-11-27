#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--){
	    int a1,b1,c1;
	    cin>>a1>>b1>>c1;
	    if((a1+c1)<=b1)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
