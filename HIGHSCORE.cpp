#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
       int x;
       cin>>x;
	    int tmp2=0;
	    for(int i=0;i<4;i++)
	    {
	        int temp;
	        cin>>temp;
	        if(temp>tmp2)
	        {
	            tmp2=temp;
	        }
	    }
	    std::cout << tmp2 << std::endl;
	}
	return 0;
}
