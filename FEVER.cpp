#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp;
	    cin>>tmp;
	    if(tmp>98)
	    {
	        std::cout << "YES" << std::endl;
	    }
	    else
	    {
	        std::cout << "NO" << std::endl;
	    }
	}
	return 0;
}
