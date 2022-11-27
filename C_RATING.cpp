#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int temp1,temp2;
	    cin>>temp1>>temp2;
	    int temp3;
	    temp3=temp2-temp1;
	    temp2=temp3/8;
	    if(temp3%8==0)
	    {
	        std::cout << temp2 << std::endl;
	    }
	    else
	    {
	        std::cout << temp2+1 << std::endl;
	    }
	}
	return 0;
}
