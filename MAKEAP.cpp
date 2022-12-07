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
	    int v=tmp2-tmp1;
	    if(v%2!=0)
	    {
	        std::cout << "-1" << std::endl;
	    }
	    else if(tmp2==tmp1){
	        std::cout << tmp2 << std::endl;
	    }
	    else{
	    v/=2;
	    std::cout << tmp1+v << std::endl;
	    }
	    
	}
	return 0;
}
