#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1,tmp2,tmp1_f,tmp2_f;
	    cin>>tmp1>>tmp2;
	   /* tmp2-=tmp1;
	    if(tmp2<0)
	    {
	        tmp2*=(-1);
	    }
	    std::cout << tmp2%10 << std::endl;*/
	    if (tmp1%10 == 0) {
	        tmp1_f = tmp1/10;
	    }
	    else {
	        tmp1_f = (tmp1/10)+1;
	    }
	    
	    if (tmp2%10 == 0) {
	        tmp2_f = tmp2/10;
	    }
	    else {
	        tmp2_f = (tmp2/10)+1;
	    }
	    
	    if (tmp1_f > tmp2_f) {
	        std::cout << tmp1_f - tmp2_f << std::endl;
	    }
	    else {
	        std::cout << tmp2_f - tmp1_f << std::endl;
	    }
	}
	return 0;
}
