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
	    long tmp2=0,tmp3=0;
	    for(int i=0;i<tmp1;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<tmp1;i++)
	    {
	        if(arr[i]==0)
	        {
	            tmp3+=(tmp2*(tmp2+1))/2;
	            tmp2=0;
	        }
	        else
	        tmp2++;
	    }
	    tmp3+=(tmp2*(tmp2+1))/2;
	    std::cout << tmp3 << std::endl;
	}
	return 0;
}
