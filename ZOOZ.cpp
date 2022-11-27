#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
    while (cas--) 
    {
	    long tmp1;
	    cin>>tmp1;
	    /*if (tmp1%2 == 0) {
	        std::cout << '1';
	        for(int i=1; i<tmp1; i++) {
	            std::cout << '1';
	        }
	        std::cout << '0' << std::endl;
	    }*/
	    if (tmp1%2 == 0) 
	    {
	        std::cout << "1";
	        for(int i=1; i<tmp1-1; i++) 
	        {
	            std::cout << "0";
	        }
	        std::cout << "1" << std::endl;
	    }
	    else {
	        for (int i=0; i<tmp1/2; i++)
	        {
	            std::cout << "0";
	        }
	        /*for (int i=0; i<tmp1; i++) {
	            std::cout << '1';
	        }*/
	        std::cout << "1";
	        
	        for (int i=(tmp1/2)+1; i<tmp1; i++)
	        {
	            std::cout << "0";
	        }
	        cout<<endl;
	    }
	    }
	return 0;
}
