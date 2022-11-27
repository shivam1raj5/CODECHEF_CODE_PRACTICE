#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1;
	    cin>>tmp1;
	    int arr[tmp1];
	    for(int i=1;i<=tmp1;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=tmp1;i>=0;i--)
	    {
	        if(arr[i]!=0)
	        {
	            std::cout << i-1 << std::endl;
	            break;
	        }
	    }
	    
	    
	}
	return 0;
}
