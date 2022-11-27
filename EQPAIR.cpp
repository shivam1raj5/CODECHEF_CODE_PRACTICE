#include <iostream>
#include <map>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int tmp1;
	    cin>>tmp1;
	    ll arr[tmp1];
	    map<ll,ll>as;

	    for(int i=0;i<tmp1;i++)
	    {
	        cin>>arr[i];
	        as[arr[i]]++;
	    }
	    ll p=0;
	    for(auto j:as)
	    {
    	        if(j.second>1)
    	        {
    	            p+=(j.second*(j.second-1))/2;
    	        }

	    }
	    std::cout << p << std::endl;
	}
	
	return 0;
}
