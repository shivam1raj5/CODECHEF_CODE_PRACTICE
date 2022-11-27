#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int temp1,temp2=0;
	    int arr[50]={};
	    cin>>temp1;
	    for(int i=0;i<temp1;i++)
	    {
	        int s,m=0;
	        cin>>s;
	        while(s){
	        if(arr[m]==0)
	        {
	            arr[m]=s%2;
	        }
	        s=s/2;
	        m++;
	        }
	    }
	    for(int i=0;i<50;i++)
	    {
	        temp2=temp2+arr[i];
	    }
	    std::cout << temp2 << std::endl;
	}
	return 0;
}
