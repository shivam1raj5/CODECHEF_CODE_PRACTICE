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
	    if((tmp1/tmp3)==(tmp2/tmp4))
	    {
	        std::cout << "Both" << std::endl;
	    }
	    else if((tmp1/tmp3)>(tmp2/tmp4))
	    {
	        std::cout << "Chefina" << std::endl;
	    }
	    else
	    {
	        std::cout << "chef" << std::endl;
	    }
	}
	return 0;
}
