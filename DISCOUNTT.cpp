#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1,tmp2,tmp3;
	    cin>>tmp1>>tmp2>>tmp3;
	    int arr[tmp1];
	    for(int i=0;i<tmp1;i++)
	    {
	        cin>>arr[i];
	    }
	    int tmp4=0;
	    for(int i=0;i<tmp1;i++)
	    {
	        tmp4+=arr[i];
	    }
	    for(int i=0;i<tmp1;i++)
	    {
	        if(arr[i]<tmp3)
	        {
	            arr[i]=0;
	        }
	        else{
	            arr[i]=arr[i]-tmp3;
	        }
	    }
	    int tmp5=0;
	    for(int i=0;i<tmp1;i++)
	    {
	        tmp5+=arr[i];
	    }
	    tmp5+=tmp2;
	    if(tmp4>tmp5)
	    {
	        std::cout << "COUPON" << std::endl;
	    }
	    else
	    {
	        std::cout << "NO COUPON" << std::endl;
	    }
	}
	return 0;
}
