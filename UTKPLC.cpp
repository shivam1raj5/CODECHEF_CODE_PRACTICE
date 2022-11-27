#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	char first,second,third;
	char x,y;
	while(T--)
	{
	    cin>>first>>second>>third;
	    cin>>x>>y;
	    if(x==first && y==second)
	    {
	        cout<<x<<endl;
	    }
	    else if(x==first && y==third)
	    {
	        cout<<x<<endl;
	    }
	     else if(x==second && y==first)
	    {
	        cout<<y<<endl;
	    }
	     else if(x==second && y==third)
	    {
	        cout<<x<<endl;
	    }
	     else if(x==third && y==first)
	    {
	        cout<<y<<endl;
	    }
	     else if(x==third && y==second)
	    {
	        cout<<y<<endl;
	    }
	};
	return 0;
}
