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
	    if(temp3<temp1 || temp4<temp2)
	    {
	        std::cout << "IMPOSSIBLE" << std::endl;
	    }
	    else
	    {
	        std::cout << "POSSIBLE" << std::endl;
	    }
	}
	return 0;
}
