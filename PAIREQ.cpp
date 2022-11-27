#include <iostream>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp;
	    cin>>tmp;
	    int arr[tmp];
	    //int a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
	    map<int,int> tmp2;
	    for(int i=0;i<tmp;i++)
	    {
	        cin>>arr[i];
	        /*if(arr[i]==0)
	        a0++;
	        else if(arr[i]==1)
	        a1++;
	        else if(arr[i]==2)
	        a2++;
	        else if(arr[i]==3)
	        a3++;
	        else if(arr[i]==4)
	        a4++;
	        else if(arr[i]==5)
	        a5++;
	        else if(arr[i]==6)
	        a6++;
	        else if(arr[i]==7)
	        a7++;
	        else if(arr[i]==8)
	        a8++;
	        else
	        a9++;*/
	        tmp2[arr[i]]++;
	        
	    }
	   /* if(a0>a1 && a0>a2 && a0>a3 && a0>a4 && a0>a5 && a0>a6 && a0>a7 && a0>a8 && a0>a9)
	    {
	        ass=a0;
	    }
	    else if(a1>a0 && a1>a2 && a1>a3 && a1>a4 && a1>a5 && a1>a6 && a1>a7 && a1>a8 && a1>a9)
	    {
	        ass=a1;
	    }else if(a2>a0 && a2>a1 && a2>a3 && a2>a4 && a2>a5 && a2>a6 && a2>a7 && a2>a8 && a2>a9)
	    {
	        ass=a2;
	    }
	    else if(a3>a0 && a3>a2 && a3>a1 && a3>a4 && a3>a5 && a3>a6 && a3>a7 && a3>a8 && a3>a9)
	    {
	        ass=a3;
	    }
	    else if(a4>a0 && a4>a2 && a4>a3 && a4>a1 && a4>a5 && a4>a6 && a4>a7 && a4>a8 && a4>a9)
	    {
	        ass=a4;
	    }
	    else if(a5>a0 && a5>a2 && a5>a3 && a5>a4 && a5>a1 && a5>a6 && a5>a7 && a5>a8 && a5>a9)
	    {
	        ass=a5;
	    }
	    else if(a6>a0 && a6>a2 && a6>a3 && a6>a4 && a6>a5 && a6>a1 && a6>a7 && a6>a8 && a6>a9)
	    {
	        ass=a6;
	    }
	    else if(a7>a0 && a7>a2 && a7>a3 && a7>a4 && a7>a5 && a7>a6 && a7>a1 && a7>a8 && a7>a9)
	    {
	        ass=a7;
	    }
	    else if(a8>a0 && a8>a2 && a8>a3 && a8>a4 && a8>a5 && a8>a6 && a8>a7 && a8>a1 && a8>a9)
	    {
	        ass=a8;
	    }
	    else if(a9>a0 && a9>a2 && a9>a3 && a9>a4 && a9>a5 && a9>a6 && a9>a7 && a9>a8 && a9>a1)
	    {
	        ass=a9;
	    }*/
	    int ans=0;
	    for (auto i : tmp2) {
	        ans= max(ans,i.second);
	    }
	    std::cout << tmp-ans << std::endl;
	    
	}
	return 0;
}
