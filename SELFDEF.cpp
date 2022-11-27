#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int num,z,count=0;;
	    cin>>num;
	    for (int i=0;i<num;i++) {
	        cin>>z;
	        if(z>=10 && z<=60)
	        {
	            count++;
	        }
	    }
	    std::cout << count << std::endl;
	    
	}
	return 0;
}
