#include <bits/stdc++.h>
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
	    int tmp2=INT_MIN;
	    for(int i=0;i<tmp1;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]>tmp2)
	        tmp2=arr[i];
	    }
	    /*sort(arr.begin(),arr.end());
	    std::cout << arr[tmp1-1] << std::endl;*/
	    std::cout << tmp2 << std::endl;
	}
	return 0;
}
