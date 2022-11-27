#include <iostream>
using namespace std;
 int fun1()
 {
     int tmp1,tmp2;
	    cin>>tmp1>>tmp2;
	    if(tmp2==tmp1)
	    {
	        std::cout << "YES" << std::endl;
	        return 0;
	    }
	    if(tmp1<tmp2)
	    {
	        while(tmp2>tmp1)
	        {
	            tmp1*=2;
	        }
	    }
	    else
	    {
	       while(tmp1>tmp2)
	        {
	            tmp2*=2;
	        }
	    }
	    if(tmp2==tmp1)
	    {
	        std::cout << "YES" << std::endl;
	    }
	    else
	    {
	        std::cout << "NO" << std::endl;
	    }
	    return 0;
 }
int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    fun1();
	}
	return 0;
}
