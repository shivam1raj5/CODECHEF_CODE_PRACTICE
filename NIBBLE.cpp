#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int nib;
	    cin>>nib;
	    int c=nib%4;
	    if(c==0)
	    {
	        std::cout << "Good" << std::endl;
	    }
	    else
	    {
	        cout<<"Not Good"<<endl;
	    }
	}
	return 0;
}
