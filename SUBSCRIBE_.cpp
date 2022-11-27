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
	    int tmp3=tmp1/6;
	    if(tmp1%6!=0)
	    {
	        tmp3++;
	    }
	    std::cout << tmp3*tmp2 << std::endl;
	    
	}
	return 0;
}
