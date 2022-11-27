#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int test;
	cin>>test;
	while(test--)
	{
	    int first,second;
	    cin>>first>>second;
	    int temp1,temp2;
	    temp1=first+second;
	    temp2=21-temp1;
	    if(temp2<=10)
	    {
	        cout << temp2<<endl;
	    }
	    else
	    {
	        cout<< -1<<endl;
	    }
	}
	return 0;
}
