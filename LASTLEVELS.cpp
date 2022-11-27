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
	    int tmp4;
	    tmp4=tmp1/3;
	    if(tmp1<=3)
	    {
	        std::cout << tmp1*tmp2 << std::endl;
	    }
	    else if(tmp1%3==0)
	    {
	        tmp4--;
	        tmp4*=tmp3;
	        tmp1=tmp1*tmp2;
	        std::cout << tmp1+tmp4 << std::endl;
	        
	    }
	    else
	    {
	        tmp4*=tmp3;
	        tmp1=tmp1*tmp2;
	        std::cout << tmp1+tmp4 << std::endl;
	    }
	}
	return 0;
}
