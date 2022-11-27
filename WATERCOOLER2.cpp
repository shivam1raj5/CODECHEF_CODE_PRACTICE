#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    long long int temp1,temp2,temp3;
	    cin>>temp1>>temp2;
	    temp3=temp2/temp1;
	    if(temp2%temp1==0)
	    {
	        std::cout << temp3-1<< std::endl;
	    }
	    else
	    {
	        std::cout << temp3 << std::endl;
	    }
	    
	}
	return 0;
}
