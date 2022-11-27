#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp;
	    cin>>tmp;
	    char s[tmp],r[tmp];
	    for(int i=0;i<tmp;i++)
	    {
	        cin>>s[i];
	    }
	    for(int i=0;i<tmp;i++)
	    {
	        if(s[i]=='A')
	        {
	            r[i]='T';
	        }
	        else if(s[i]=='T')
	        {
	            r[i]='A';
	        }
	         else if(s[i]=='C')
	        {
	            r[i]='G';
	        }
	         else
	        {
	            r[i]='C';
	        }
	        
	    }
        for(int i=0;i<tmp;i++)
	    {
	        std::cout << r[i];
	    }
	    cout<<endl;
	}
	return 0;
}
