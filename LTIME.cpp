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
	    if(temp == 1 || temp == 2 || temp == 3 || temp == 4)
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
