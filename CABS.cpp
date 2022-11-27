#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int a,b;
	    cin>>a>>b;
	    if(b>a)
	    {
	        std::cout <<"FIRST"<< std::endl;
	    }
	    else if(a>b)
	    {
	        std::cout <<"SECOND"<< std::endl;
	    }
	    else
	    {
	        cout<<"ANY"<<endl;
	    }
	}
	return 0;
}
