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
	    if(tmp1==tmp2)
	    {
	        std::cout << "YES" << std::endl;
	    }
	    else if(tmp1>tmp2)
	    std::cout << "YES" << std::endl;
	    else{
	        std::cout << "NO" << std::endl;
	    }
	}
	return 0;
}
