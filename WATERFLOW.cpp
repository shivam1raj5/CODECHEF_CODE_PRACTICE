#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int temp1,temp2,temp3,temp4;
	    cin>>temp1>>temp2>>temp3>>temp4;
	    temp4*=temp3;
	    temp1+=temp4;
	    if(temp2==temp1)
	    {
	        std::cout << "filled" << std::endl;
	    }
	    else if(temp2>temp1)
	    {
	        std::cout << "Unfilled" << std::endl;
	    }
	    else
	    {
	        std::cout << "overFlow" << std::endl;
	    }
	}
	return 0;
}
