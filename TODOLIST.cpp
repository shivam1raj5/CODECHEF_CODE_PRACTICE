#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int temp1,temp2=0;
	    cin>>temp1;
	    for(int i=1;i<=temp1;i++)
	    {
	        int x;
	        cin>>x;
	        if(x>=1000)
	        {
	            temp2++;
	        }
	    }
	    std::cout << temp2 << std::endl;
	    
	}
	return 0;
}
