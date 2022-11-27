#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    ll tmp1;
	    cin>>tmp1;
	    vector<ll>as(tmp1);
	    ll p=LLONG_MAX;
	    for(int i=0;i<tmp1;i++)
	    {
	        cin>>as[i];
	        if(as[i]>=0 && p>as[i]){
	            p=as[i];
	        }
	    }
	   ll minn=*min_element(as.begin(),as.end());
	   ll maxx=*max_element(as.begin(),as.end());
	   if(p==LLONG_MAX)
	   {
	       std::cout << maxx*maxx<<" "<<minn*minn << std::endl;
	   }
	   else{
	       if(minn<0)
	       {
	           std::cout << minn*maxx<<" "<<max(maxx*maxx,minn*minn) << std::endl;
	       }
	       else{
	           std::cout << minn*minn<<" "<<maxx*maxx << std::endl;
	       }
	   }
	}
	return 0;
}
