#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int n,c=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        c++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if (a[i]==6 || a[i]==13 || a[i]==20 || a[i]==27 || a[i]==7 || a[i]==14 || a[i]==21 || a[i]==28)
	        {
	            c--;
	        }
	    }
	    cout<<8+c<<endl;
	}
	return 0;
}
