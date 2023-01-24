#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1,tmp2,tmp3,tmp4;
	    cin>>tmp1>>tmp2>>tmp3>>tmp4;
	    int tmp5 = tmp1*tmp1;
	    int tmp6 = tmp2*tmp2;
	    tmp5 += tmp6;
	    int tmp7 = tmp3*tmp3;
	    int tmp8 = tmp4*tmp4;
	    tmp7 += tmp8;
	    if(tmp5>tmp7){
	        std::cout << "ALEX" << std::endl;
	    }
	    else if(tmp5<tmp7){
	        std::cout << "BOB" << std::endl;
	    }
	    else{
	        std::cout << "EQUAL" << std::endl;
	    }
	    
	}
	return 0;
}
