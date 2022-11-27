#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int temp1,temp2,temp3;
	    cin>>temp1>>temp2>>temp3;
	    if(temp2/temp1<=temp3)
	    {
	        std::cout << temp3 - (temp2/temp1) << std::endl;
	    }
	    else
	    {
	        std::cout << '0' << std::endl;
	    }
	}
	return 0;
}
