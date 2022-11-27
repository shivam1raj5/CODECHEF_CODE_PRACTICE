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
	    temp1=temp1*temp3;
	    if(temp1<temp2)
	    {
	        std::cout << "YES" << std::endl;
	    }
	    else
	    {
	        std::cout << "NO" << std::endl;
	    }
	}
	return 0;
}
