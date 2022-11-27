#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1,tmp2,tmp3;
	    cin>>tmp1>>tmp2>>tmp3;
	    if(tmp1>tmp2 && tmp1>tmp3)
	    {
	        std::cout << "Alice" << std::endl;
	    }
	    else if(tmp2>tmp1 && tmp2>tmp3)
	    {
	       std::cout << "Bob" << std::endl;
	    }
	    else
	    {
	        std::cout << "Charlie" << std::endl;
	    }
	}
	return 0;
}
