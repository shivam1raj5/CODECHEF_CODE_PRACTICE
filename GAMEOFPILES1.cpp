#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1;
	    int c=0,d=0;
	    cin>>tmp1;
	    int arr[tmp1];
	    for(int i=0;i<tmp1;i++)
	    {
	        cin>>arr[i];
	       // o+=arr[i];
	    }
	    //sort(arr,arr+tmp1);
	    for(int i=0;i<tmp1;i++)
	    {
	        c+=arr[i];
	        if(arr[i]==1)
	        {
	        
	        d++;
	        //break;
	        }
	       
	        
	        
	    }
	    if(d>0)
	    {
	        std::cout << "CHEF" << std::endl;
	    }
	    else{
	    if(c%2==0)
	        {
	            std::cout << "CHEFINA" << std::endl;
	        }
	        else
	        {
	            std::cout << "CHEF" << std::endl;
	        }
	    }
	}
	return 0;
}
