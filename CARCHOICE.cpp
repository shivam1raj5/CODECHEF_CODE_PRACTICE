#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    float x1,x2,y1,y2;
	    cin>>x1>>x2>>y1>>y2;
	    x1=y1/x1;
	    x2=y2/x2;
	    if(x1<x2)
	    {
	        std::cout << "-1" << std::endl;
	    }
	    else if(x1==x2)
	    {
	        std::cout << "0" << std::endl;
	    }
	     else
	    {
	        std::cout << "1" << std::endl;
	    }
	    
	}
	return 0;
}
