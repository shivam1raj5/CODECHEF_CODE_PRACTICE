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
	    tmp1*=10;
	    tmp2*=5;
	    if(tmp1<tmp2)
	    {
	        std::cout << "SECOND" << std::endl;
	    }
	    else if(tmp2<tmp1)
	    {
	        std::cout << "FIRST" << std::endl;
	    }
	    else
	    {
	        std::cout << "ANY" << std::endl;
	    }
	}
	return 0;
}
