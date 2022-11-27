#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1;
	    cin>>tmp1;
	    string shi;
	    cin>>shi;
	    int tmp2=1;
	    for(int i=1;i<=tmp1;i++)
	    {
	        if(shi[i]=='1')
	        {
	            tmp2++;
	        }
	        else{
	            break;
	        }
	    }
	    std::cout << tmp2 << std::endl;
	}
	return 0;
}
