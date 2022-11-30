#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1,tmp2,tmp3,tmp4,tmp10;
	    cin>>tmp1>>tmp2>>tmp3>>tmp4>>tmp10;
	    int tmp5=min(tmp2,tmp1-tmp2+1);
	    int tmp6=min(tmp3,tmp1-tmp3+1);
	    int tmp7=min(tmp4,tmp1-tmp4+1);
	    int tmp8=min(tmp10,tmp1-tmp10+1);
	    int tmp9=abs(tmp4-tmp2)+abs(tmp10-tmp3);
	    int tmp11=min(tmp7,tmp8)+min(tmp5,tmp6);
	    int tmp12=min(tmp9,tmp11);
	    std::cout << tmp12 << std::endl;
	}
	return 0;
}
