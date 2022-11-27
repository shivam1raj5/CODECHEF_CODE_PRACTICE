#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    y=y*1;
	    z=z*2;
	    y=y+z;
	    if(y>=x)
	    {
	        cout<<"Qualify"<<endl;
	    }
	    else
	    {
	        cout<<"NotQualify"<<endl;
	    }
	}
	return 0;
}
