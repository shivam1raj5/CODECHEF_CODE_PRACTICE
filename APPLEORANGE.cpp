#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--){
	    long long int tmp1,tmp2;
	    cin>>tmp1>>tmp2;
	    if(tmp1==1 || tmp2==1)
	    {
	        std::cout << 1 << std::endl;
	    }
	    else{
	        while(tmp1!=tmp2)
	        {
	            if(tmp1>tmp2)
	            {
	                tmp1-=tmp2;
	            }
	            else{
	                tmp2-=tmp1;
	            }
	        }
	        std::cout << tmp1 << std::endl;
	    }
	}
	return 0;
}
