#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    
	    int tmp1,tmp2,tmp3,tmp4;
	    cin>>tmp1>>tmp2>>tmp3>>tmp4;
	    //int p=tmp1;
	    int tmp5=tmp1;
	    for(int i=0;i<tmp4;i++)
	    {
	        tmp5=tmp5+tmp2;
	        tmp5=tmp5-tmp3;
	        
	    }
	    std::cout << tmp5 << std::endl;
	}
	return 0;
}
