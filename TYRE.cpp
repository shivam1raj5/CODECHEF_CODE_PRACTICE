#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int a1,b1;
	    cin>>a1>>b1;
	    a1*=2;
	    b1*=4;
	    std::cout << a1+b1 << std::endl;
	}
	return 0;
}
