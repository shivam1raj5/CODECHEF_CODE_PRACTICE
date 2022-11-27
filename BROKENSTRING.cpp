#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    string s1;//,s2,s3;
	    int n;
	    cin>>n;
	    cin>>s1;
	   // int n=s1.size();
	    int t=0,q=0;
	    int p=n/2;
	   //p++;
	    for(int i=0;i<n/2;i++)
	    {
	        if(s1[i]!=s1[p+i])
	        {
	           t++;
	           break;
	        }
	        //n--;
	    }
	    if(t>0)
	    {
	        std::cout << "NO" << std::endl;
	    }
	    else{
	        std::cout << "YES" << std::endl;
	    }
	}
	return 0;
}
