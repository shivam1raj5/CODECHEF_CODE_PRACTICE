#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	long long tmp1,tmp2;
	while(cas--)
	{
	    cin>>tmp1>>tmp2;
	    cout<<min(3*tmp1-2*tmp2,tmp2)<<" "<<tmp2<<" "<<max(3*tmp1-2*tmp2,tmp2)<<endl;
	}
	return 0;
}
