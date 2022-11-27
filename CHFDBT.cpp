#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int ques;
	    cin>>ques;
	    ques++;
	    std::cout << (ques>>1) << std::endl;
	}
	return 0;
}
