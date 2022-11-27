#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int temp1,temp2,temp3;
	cin>>temp1>>temp2>>temp3;
	temp1-=temp2;
	temp2=temp1-temp3;
	std::cout << temp1<<" "<<temp2 << std::endl;
	return 0;
}
