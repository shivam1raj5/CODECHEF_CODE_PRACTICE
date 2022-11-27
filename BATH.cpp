#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int x1,y1;
	    cin>>x1>>y1;
	    y1*=2;
	    if(y1>x1)
	    {
	      cout<<"0"<<endl;  
	    }
	    else{
	    x1=x1/y1;
	    std::cout << x1 << std::endl;}
	}
	return 0;
}
