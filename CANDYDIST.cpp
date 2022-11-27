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
	    if(tmp1%tmp2==0)
	    {
	        int c;
	        c=tmp1/tmp2;
	        if(c%2==0)
	        {
	            std::cout << "YES" << std::endl;
	        }
	        else
	        {
	            std::cout << "NO" << std::endl;
	        }
	    }
	else
	{
	    std::cout << "NO" << std::endl;
	}
	    }
	return 0;
}
