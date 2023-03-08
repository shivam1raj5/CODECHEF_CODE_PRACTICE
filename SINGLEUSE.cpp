#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--){
	    int tmp1,tmp2,tmp3;
	    cin>>tmp1>>tmp2>>tmp3;
	    tmp1-=tmp3;
	    int p=tmp1/tmp2;
	    if(tmp1%tmp2!=0){
	        p++;
	    }
	    std::cout << p+1 << std::endl;
	}
	return 0;
}
