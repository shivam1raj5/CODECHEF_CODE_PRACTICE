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
	    if(temp2==1)
	    {
	        
	        if(temp1%4==0)
	        std::cout << "ON" << std::endl;
	        else
	        {
	            std::cout << "Ambiguous" << std::endl;
	        }
	    }
	    else
	    {
	        if(temp1%4==0)
	        std::cout << "OFF" << std::endl;
	    
	    else
	    {
	        std::cout << "ON" << std::endl;
	    }
	    }
	}
	return 0;
}
