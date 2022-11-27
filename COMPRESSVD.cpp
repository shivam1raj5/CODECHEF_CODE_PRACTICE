#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int temp1,temp2=0;
	    cin>>temp1;
	    int ar[temp1+1];
	    for(int i=0;i<temp1;i++)
	    {
	        cin>>ar[i];
	    }
	    for(int i=0;i<temp1;i++)
	    {
	       if(ar[i]!=ar[i+1])
	       {
	           temp2++;
	       }
	    }
	    std::cout << temp2 << std::endl;
	}
	return 0;
}
