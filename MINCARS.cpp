#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int num;
	    cin>>num;
	    int a;
	    a=num/4;
	    if(num%4==0)
	    {
	        std::cout << a << std::endl;
	    }
	    else
	    {
	        std::cout << a+1 << std::endl;
	    }
	}
	return 0;
}
