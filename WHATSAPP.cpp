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
	    tmp1*=tmp3;
	    tmp2*=tmp3;
	    if(tmp2>tmp1)
	    {
	        std::cout << '0' << std::endl;
	    }
	    else
	    {
	        std::cout << tmp1-tmp2 << std::endl;
	    }
	}
	return 0;
}
