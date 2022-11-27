#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int num2,num1,temp1=0,temp2=0;
	    cin>>num2>>num1;
	    if(num1%3==0)
	    {
	        temp1=temp1+(num1/3);
	    }
	    else if(num1%3==1)
	    {
	        temp1=temp1+(num1/3)+1;
	        temp2+=2;
	    }
	    else if(num1%3==2)
	    {
	        temp1=temp1+(num1/3)+1;
	        temp2+=1;
	    }
	    if(temp1+temp2<=num2)
	    {
	        cout<<"YES"<<endl;
	       cout<<temp1<<" "<<temp2<<" "<<num2-temp1-temp2<<endl; 
	    }
	    else
	    {
	        std::cout << "NO" << std::endl;
	    }
	}
	return 0;
}
