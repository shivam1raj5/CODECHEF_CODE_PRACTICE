#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1,tmp2,tmp3,tmp4;
	    cin>>tmp1>>tmp2;
	    cin>>tmp3>>tmp4;
	    int tmp5,tmp6;
	    tmp5=(tmp1+tmp2)&1;
	    tmp6=(tmp3+tmp4)&1;
	    if(tmp5==tmp6)
	    {
	        std::cout << "YES" << std::endl;
	    }
	    else
	    {
	        std::cout << "NO" << std::endl;
	    }
//	a=(X1+X2)&1
  //  b=(y1+y2)&1
    //If a == b .. print(yes)
    //else ..print(no)
	}
	return 0;
}
