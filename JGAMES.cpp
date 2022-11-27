#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int x,y;
	    cin>>x>>y;
	    x=x-y;
	    x=-(x);
	    if(x%2==0)
	    {
	        cout<<"Janmansh"<<endl;
	    }
	    else
	    {
	        cout<<"Jay"<<endl;
	    }
	}
	return 0;
}
