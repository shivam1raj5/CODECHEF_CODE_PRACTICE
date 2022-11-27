#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int n,x,temp=0;
	    cin>>n;
	    int a[100];
	    cin>>x;
	    for(int i=1;i<n;i++)
	    {
	        cin>>a[i];
	        temp=temp+a[i];
	    }
	    int a1;
	    a1=n*x;
	    a1=a1-temp;
	    if(a1<0)
	    {
	        std::cout << '0' << std::endl;
	    }
	    else
	    {
	    std::cout << a1 << std::endl;
	    }
	}
	return 0;
}
