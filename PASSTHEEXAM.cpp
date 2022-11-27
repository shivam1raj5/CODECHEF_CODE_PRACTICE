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
	    int tmp4=tmp1+tmp2+tmp3;
	    if(tmp1>=10 && tmp2>=10 && tmp3>=10)
	    {
	        if(tmp4>=100)
	        {
	            std::cout << "PASS" << std::endl;
	        }
	        else
	        {
	            std::cout << "FAIL" << std::endl;
	        }
	    }
	    else
	        {
	            std::cout << "FAIL" << std::endl;
	        }
	}
	return 0;
}
