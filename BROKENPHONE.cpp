#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1,tmp2;
	    cin>>tmp1>>tmp2;
	    if(tmp1>tmp2)
	    {
	        std::cout << "NEW PHONE" << std::endl;
	    }
	    else if(tmp2>tmp1)
	    {
	        std::cout << "REPAIR" << std::endl;
	    }
	    else
	    {
	        std::cout << "ANY" << std::endl;
	    }
	}
	return 0;
}
