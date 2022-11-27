#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int temp1,temp2;
	    cin>>temp1>>temp2;
	   int  temp=temp1+temp2;
	    int temp3=500-(2*temp1);
	    int temp4=1000-(4*temp);
	   // std::cout << temp3+temp4 << std::endl;
	    int d=1000-(4*temp2);
	    int e=500-(2*temp);
	   int x=temp3+temp4;
	    int y=d+e;
	    if(x>=y)
	    {
	        std::cout << x << std::endl;
	    }
	    else
	    {
	        std::cout << y << std::endl;
	    }
	}
	return 0;
}
