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
	    if(tmp>100)
	    {
	        std::cout << tmp-10 << std::endl;
	    }
	    else{
	        std::cout << tmp << std::endl;
	    }
	}
	return 0;
}
