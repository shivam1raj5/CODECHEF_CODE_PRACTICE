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
	    long long int tmp3=(tmp1*(tmp1-1))/2;
	    if(tmp2<tmp1/2)
	    {
	        long long tmp4=tmp1-2*tmp2;
	        tmp3=tmp3-(tmp4*(tmp4-1))/2;
	    }
	    std::cout << tmp3 << std::endl;
	}
	return 0;
}
