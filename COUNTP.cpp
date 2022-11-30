#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1,sum2=0;
	    cin>>tmp1;
	    int arr[tmp1];
	    for(int i=0;i<tmp1;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]%2)
	        {
	            sum2++;
	        }
	        /*else{
	            sum3=sum3+arr[i];
	        }*/
	    }
	   // sum3=sum3*sum2;
	    if(sum2==0 || sum2%2)
	    {
	        std::cout << "NO" << std::endl;
	    }
	    else{
	        std::cout << "YES" << std::endl;
	    }
	    
	}
	return 0;
}
