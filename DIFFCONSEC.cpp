#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp;
	    int t=0;
	    cin>>tmp;
	    string s;
	    cin>>s;
	    for(int i=0;i<tmp-1;i++)
	    {
	        if(s[i]==s[i+1])
	        {
	            t++;
	        }
	    }
	    std::cout << t << std::endl;
	}
	return 0;
}
