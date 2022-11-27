#include <bits/stdc++.h>
using namespace std;
/*int fin(int t1,int t2)
{
   int tmp1=t1;
   int tmp2=t2;
    if()
}*/
int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    /*int tmp1,tmp2;
	    cin>>tmp1>>tmp2;
	    if(tmp2==tmp1)
	    {
	        std::cout << "YES" << std::endl;
	    }
	    else
	    {
	        fin(tmp1,tmp2);
	    }*/
	    int tmp1,tmp2;
        cin>>tmp1>>tmp2;
        if((abs(tmp1-tmp2))%2==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
	}
	return 0;
}
