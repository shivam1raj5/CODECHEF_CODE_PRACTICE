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
	    tmp1*=tmp2;
	    if(tmp1%4==0)
	    {
	        std::cout << tmp1/4 << std::endl;
	    }
	    else
	    {
	        std::cout << (tmp1/4)+1 << std::endl;
	    }
	}
	return 0;
}
