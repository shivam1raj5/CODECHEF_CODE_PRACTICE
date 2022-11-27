#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1;
	    cin>>tmp1;
	    if(tmp1<=100)
	    {
	        std::cout << tmp1 << std::endl;
	    }
	     if(100<tmp1 && tmp1<=1000)
	    {
	        std::cout << tmp1-25 << std::endl;
	    }
	     if(1000<tmp1 && tmp1<=5000)
	    {
	        std::cout << tmp1-100 << std::endl;
	    }
	     if(tmp1>5000)
	    {
	        std::cout << tmp1-500 << std::endl;
	    }
	}
	return 0;
}
