#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    long long int tmp1,tmp2;
	    cin>>tmp1>>tmp2;
	    long long int tmp3;
	    tmp3=tmp2*(tmp2+1)/2;
	    if(tmp1>=tmp3)
	    {
	        std::cout << "YES" << std::endl;
	    }
	    else{
	        std::cout << "NO" << std::endl;
	    }
	}
	return 0;
}
