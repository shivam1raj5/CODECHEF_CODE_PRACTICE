#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    
	    string tmp3;
	    string tmp4;
	    int tmp1;
	    int tmp2=0;
	    cin>>tmp1>>tmp3>>tmp4;
	    map<char,int> tmp5,tmp6;
	    for(char i:tmp3)
	    {
	        tmp5[i]++;
	    }
	    for(char i:tmp4)
	    {
	        tmp6[i]++;
	    }
	    for(char i='a';i<='z';++i)
	    {
	        tmp2=max(tmp2,min(tmp5[i],tmp6[i]));
	    }
	    std::cout << tmp2 << std::endl;
	 
	}
	//return 0;
}
