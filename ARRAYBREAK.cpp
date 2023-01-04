#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1,r=0;
	    cin>>tmp1;
	    long long arr[tmp1];
	    for(int i=0;i<tmp1;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<tmp1;i++)
	    {
	        if(arr[i]%2==0)
	        {
	            r++;
	        }
	    }
	    if(r==0 || r==tmp1)
	    {
	        std::cout << '0' << std::endl;
	    }
	    else
	    {
	        std::cout << r << std::endl;
	    }
	}
	return 0;
}
