#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1,tmp2,tmp3,tmp4;
	    cin>>tmp1>>tmp2>>tmp3;
	    tmp4=tmp2+tmp1;
	    if(tmp4<=tmp3)
	    {
	        std::cout << '2' << std::endl;
	    }
	    else if(tmp3>=tmp1)
	    {
	        std::cout <<'1' << std::endl;
	    }
	    else
	    {
	        std::cout << '0' << std::endl;
	    }
	}
	return 0;
}
