#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--){
	    int tmp1,tmp2,tmp3;
	    cin>>tmp1>>tmp2>>tmp3;
	    tmp1=2*(tmp1+tmp2);
	    std::cout << tmp1*tmp3 << std::endl;
	}
	return 0;
}
