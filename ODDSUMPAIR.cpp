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
	    if((tmp1+tmp2)%2==0 && (tmp1+tmp3)%2==0 && (tmp3+tmp2)%2==0)
	    {
	        std::cout << "NO" << std::endl;
	    }
	    else
	    {
	        std::cout << "YES" << std::endl;
	    }
	}
	return 0;
}
