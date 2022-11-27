#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int temp;
	    cin>>temp;
	    temp=temp/10;
	    if(temp<=100)
	    {
	        std::cout << "100" << std::endl;
	    }
	    else
	    {
	 
	            std::cout << temp << std::endl;
	    
	    }
	}
	return 0;
}
