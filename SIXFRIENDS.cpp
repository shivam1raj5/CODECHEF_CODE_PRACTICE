#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int temp1,temp2;
	    cin>>temp1>>temp2;
	    temp1*=3;
	    temp2*=2;
	    if(temp1>temp2)
	    std::cout << temp2 << std::endl;
	    else
	    std::cout << temp1 << std::endl;
	}
	return 0;
}
