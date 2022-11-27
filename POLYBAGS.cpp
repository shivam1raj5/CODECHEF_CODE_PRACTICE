#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--)
	{
	    int item;
	    cin>>item;
	    int temp;
	    temp=item/10;
	    
        
	    
	    if(item%10==0)
	    {
	        cout<<temp<<endl;
	    }
	    else if(item<10)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        
	    cout<< temp+1<<endl;
	    }
	}
	return 0;
}
