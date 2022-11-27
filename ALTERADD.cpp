#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	   long long int tmp1,tmp2;
	    cin>>tmp1>>tmp2;
	   long long int x=0,y=0;
	    if(tmp1%2==0)
	    {
	        x++;
	    }
	   long long int tmp3=tmp1;
	    tmp3++;
	   if(tmp2%2==0)
	    {
	        y++;
	    }
	    if((tmp2-tmp1)%3==2)
	    {
	        std::cout << "NO" << std::endl;
	    }
	   /* else if(x==0 && y==0)
	    {
	        if(tmp1+1==tmp2)
	        {
	           // std::cout << "YES" << std::endl;
	        }
	        else
	        {
	            //std::cout << "NO" << std::endl;
	        }
	    }
	    else if(x==0 && y==1)
	    {
	       //std::cout << "YES" << std::endl;
	    }*/
	    else
	    {
	        std::cout << "YES" << std::endl;
	    }
	}
	return 0;
}
