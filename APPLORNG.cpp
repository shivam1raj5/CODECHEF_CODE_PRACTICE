#include <iostream>
using namespace std;

int main() {
	// your code goes here

	    int temp1,temp2,temp3;
	    cin>>temp1>>temp2>>temp3;
	    temp2+=temp3;
	    if(temp2<=temp1)
	    {
	        std::cout << "YES" << std::endl;
	    }
	    else
	    {
	        std::cout << "NO" << std::endl;
	    }
	
	return 0;
}
