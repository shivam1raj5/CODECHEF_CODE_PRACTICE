#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int cs;
	cin>>cs;
	while(cs--)
	{
	    int tp1;
	    cin>>tp1;
	    int arr[tp1];
	    int tp2=INT_MAX;
	    for(int i=0;i<tp1;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]<tp2)
	        tp2=arr[i];
	    }
	    int tmp1=0;
	    int tmp2=0;
	    for(int i=0;i<tp1;i++)
	    {
	        if(arr[i]!=tp2)
	        {
	            if(arr[i]%tp2==0)
	            {
	                tmp1++;
	            }
	            else
	            {
	                tmp2=1;
	                break;
	            }
	        }
	    }
	    if(tmp2)
	    {
	        std::cout << tp1 << std::endl;
	    }
	    else
	    {
	        std::cout << tmp1 << std::endl;
	    }
	}
	return 0;
}
