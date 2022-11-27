#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	std::cin >> cas;
	while(cas--)
	{
	    int tmp1;
	    cin>>tmp1;
	    tmp1*=1000;
	    tmp1/=100;
	    std::cout << tmp1 << std::endl;
	}
	return 0;
}
