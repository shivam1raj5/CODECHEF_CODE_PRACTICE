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
	    int tmp4=(tmp1+tmp2)/2;
	    int tmp5=(tmp1+tmp3)/2;
	    int tmp6=(tmp2+tmp3)/2;
	    if(tmp4>=35 && tmp5>=35 && tmp6>=35)
	    {
	        std::cout << "PASS" << std::endl;
	    }
	    else
	    {
	        std::cout << "FAIL" << std::endl;
	    }
	}
	return 0;
}
