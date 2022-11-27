#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int x,y;
	    cin>>x>>y;
	    x=x*10;
	    y=y*5;
	    std::cout << x+y << std::endl;
	}
	return 0;
}
