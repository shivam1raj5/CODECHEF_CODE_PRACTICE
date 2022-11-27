#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    long long int tmp1,tmp2,tmp3,tmp4;
	    cin>>tmp1>>tmp2>>tmp3;
	    if(tmp1%tmp2==0){
	    std::cout << -1 << std::endl;}
	    else
	    {
	        tmp4=ceil((long double)tmp3/tmp1*1.000000);
	        tmp3=tmp2 /__gcd(tmp1,tmp2);
	        if(tmp4%tmp3==0)
	        tmp4+=1;
	        std::cout << tmp4*tmp1 << std::endl;
	    }
	}
	return 0;
}
