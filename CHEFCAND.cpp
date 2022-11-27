#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1,tmp2;
	    cin>>tmp1>>tmp2;
	    int tmp4=tmp1-tmp2;
	    if(tmp2>=tmp1)
	    {
	        std::cout << '0' << std::endl;
	    }
	    else if(tmp4%4==0)
	    {
	        std::cout << tmp4/4 << std::endl;
	    }
	    else
	    {
	        std::cout << (tmp4/4)+1 << std::endl;
	    }
	}
	
	return 0;
}
