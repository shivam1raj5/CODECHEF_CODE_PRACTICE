#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{int bas[4];
	    for (int i=0;i<4;i++) {
            cin>>bas[i];
	    }
	        int pa=bas[0]-bas[2];
	        if(pa<1)
	        {
	        pa=pa*(-1);}
	        int q=bas[1]-bas[3];
	        if(q<1)
	        {
	        q=q*(-1);}
	       if(pa>q)
	       {
	           cout<<pa<<endl;         
	       }
	       else
	       {
	           cout<<q<<endl;
	       }
}
	return 0;
}