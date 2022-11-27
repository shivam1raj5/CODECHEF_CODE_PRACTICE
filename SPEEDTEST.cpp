#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    float tmp1,tmp2,tmp3,tmp4;
	    cin>>tmp1>>tmp2>>tmp3>>tmp4;
	    if((tmp1/tmp2)<(tmp3/tmp4))
	    {
	        std::cout << "Bob" << std::endl;
	    }
	    else if((tmp1/tmp2)>(tmp3/tmp4))
	    {
	        std::cout << "Alice" << std::endl;
	    }
	    else
	    {
	        std::cout << "Equal" << std::endl;
	    }
	}
	return 0;
}
