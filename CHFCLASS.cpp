#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	     int num1;
	    cin>>num1;
	    if(num1<=6){
	    int num2=num1/6;
	    cout<<num2<<endl;}
	    if(num1>6){
	        if(num1%7>=6){
	            cout<<(num1/7)+1<<endl;
	        }
	        else{
	            cout<<num1/7<<endl;
	        }
	    }
	}
	return 0;
}
