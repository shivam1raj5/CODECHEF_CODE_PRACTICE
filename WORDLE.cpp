#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    string num1,num2;
	 cin>>num1>>num2;
	 for(int i=0;i<5;i++){
	     if(num1[i]==num2[i])
	     {
	         cout<<"G";
	     }
	     else{
	         cout<<"B";
	     }
	 }cout<<endl;
	    
	}
	return 0;
}
