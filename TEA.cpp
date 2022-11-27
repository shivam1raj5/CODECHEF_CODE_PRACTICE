#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	std::cin >> cas;
	while(cas--)
	{
	    int tmp1,tmp2,tmp3,tmp4;
	    cin>>tmp1>>tmp2>>tmp3;
	    if(tmp2>tmp1)
	    {
	        std::cout << tmp3 << std::endl;
	    }
	    else
	    {
	        tmp4=tmp1/tmp2;
	        if(tmp1%tmp2!=0)
	        tmp4++;
	        std::cout << tmp4*tmp3 << std::endl;
	        
	    }
	}
	return 0;
}
