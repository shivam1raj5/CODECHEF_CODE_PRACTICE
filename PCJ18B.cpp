#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--){
	    
	    int tmp;
	    cin>>tmp;
	    int sum=0;
	    for(int i=1;i<=tmp;i=2+i)
	    {
	        int t=(tmp-i+1);
	        t*=t;
	        sum+=t;
	    }
	    std::cout << sum << std::endl;
	}
	return 0;
}
