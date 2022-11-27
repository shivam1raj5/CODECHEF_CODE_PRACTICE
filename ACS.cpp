#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	   int tmp;
	   cin>>tmp;
	   int a=tmp/100;
	   /*if(tmp>10 && tmp<100)
	   {
	       std::cout << "-1" << std::endl;
	   }
	   else if(tmp>108 && tmp<200)
	   {
	       std::cout << "-1" << std::endl;
	   }
	   else if(tmp>207 && tmp<300)
	   {
	       std::cout << "-1" << std::endl;
	   }
	   else if(tmp>306 && tmp<400)
	   {
	       std::cout << "-1" << std::endl;
	   }
	   else if(tmp>405 && tmp<500)
	   {
	       std::cout << "-1" << std::endl;
	   }
	   else if(tmp>504&& tmp<600)
	   {
	       std::cout << "-1" << std::endl;
	   }
	   else if(tmp>603 && tmp<700)
	   {
	       std::cout << "-1" << std::endl;
	   }
	   else if(tmp>702 && tmp<800)
	   {
	       std::cout << "-1" << std::endl;
	   }
	   else if(tmp>809 && tmp<900)
	   {
	       std::cout << "-1" << std::endl;
	   }
	   else if(tmp>901 && tmp<1000 && tmp>1000)
	   {
	       std::cout << "-1" << std::endl;
	   }
	   else if(a==0 && tmp<100)
	   {
	       std::cout << tmp/10 << std::endl;
	   }
	   else if(a==0)
	   {
	       std::cout << tmp/100 << std::endl;
	   }
	   else if(tmp==10)
	   {
	       std::cout << tmp << std::endl;
	   }
	   else
	   {
	       std::cout << (tmp/100)+a  << std::endl;
	   }*/
	   a = a +(tmp-(100)*a)/1;
	   if(a<=10)
	   {
	       std::cout << a << std::endl;
	   }
	   else
	   {
	       std::cout << "-1" << std::endl;
	   }
	   
	}
	return 0;
}
