#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1,f=0;
	    cin>>tmp1;
	    int arr[tmp1];
	    for(int i=0;i<tmp1;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<tmp1;i++)
	    {
	        if(arr[i]>arr[i+1]){
	        f++;}
	    }
	    if(f==0)
	    {
	        std::cout << "YES" << std::endl;
	    }
	    else
	    {
	        std::cout << "NO" << std::endl;
	    }
	    
	}
	return 0;
}
