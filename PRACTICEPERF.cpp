#include <iostream>
using namespace std;

int main() {
	// your code goes here

	    int tmp=0;
	    for(int i=0;i<4;i++)
	    {
	        int temp;
	        cin>>temp;
	        if(temp>=10)
	        {
	            tmp++;
	        }
	    }
	    std::cout << tmp << std::endl;
	
	return 0;
}
