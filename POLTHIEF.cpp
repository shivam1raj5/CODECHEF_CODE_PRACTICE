#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int temp1,temp2,n=0;
	    cin>>temp1>>temp2;
	    if(temp1==temp2)
	    {
	        std::cout << '0' << std::endl;
	    }
	    else if(temp1>temp2)
	    {
	        while(temp2!=temp1)
	        {
	            temp1+=1;
	            temp2+=2;
	            n++;
	        }

	        std::cout << n << std::endl;
	    }
	    
	    else
	    {
	        while(temp2!=temp1)
	        {
	            temp1+=2;
	            temp2+=1;
	            n++;
	        }
	        std::cout << n << std::endl;
	    }
	}
	return 0;
}
