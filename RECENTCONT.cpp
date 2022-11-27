#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int temp1,temp2=0,temp3=0;
	    cin>>temp1;
	    string ss;
	    for(int i=0;i<temp1;i++)
	    {
	        cin>>ss;
	        if(ss[0]=='S')
	        {
	            temp2++;
	        }
	        else
	        {
	            temp3++;
	        }
	        
	    }
	    std::cout << temp2<<" "<<temp3 << std::endl;
	}
	return 0;
}
