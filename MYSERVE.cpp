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
	    tmp1+=tmp2;
	    if(tmp1==0 || tmp1==1 || tmp1==4 || tmp1==5 || tmp1==8 || tmp1==9 || tmp1==12 || tmp1==13 || tmp1==16 || tmp1==17 || tmp1==20)
	    
	    {
	        std::cout << "Alice" << std::endl;
	    }
	    else
	    {
	        std::cout << "Bob" << std::endl;
	    }
	}
	return 0;
}
