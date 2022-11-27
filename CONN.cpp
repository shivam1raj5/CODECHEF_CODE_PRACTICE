#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1;
	    cin>>tmp1;
	    if(tmp1==1 || tmp1==3 || tmp1==5){
	    std::cout << "NO" << std::endl;}
	    else{
	    std::cout << "YES" << std::endl;}
	}
	return 0;
}
