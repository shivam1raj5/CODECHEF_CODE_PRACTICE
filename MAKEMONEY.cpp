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
	        cin>>arr[i];}
	        long long int tmp4=0;
	        int tmp5=0;
	        for(int i=0;i<tmp1;i++)
	        {
	            //cin>>arr[i];
	            if(tmp2-arr[i]>tmp3)
	            {
	                tmp4+=tmp2;
	                tmp5+=tmp3;
	            }
	            else{
	                tmp4+=arr[i];
	            }
	        }
	        std::cout << tmp4-tmp5 << std::endl;
	    
	}
	return 0;
}
