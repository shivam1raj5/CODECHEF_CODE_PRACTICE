#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int cas;
	cin>>cas;
	while(cas--)
	{
	    long long int tmpn;
	    cin>>tmpn;
	    long long arr1[2*tmpn];
	    for(long long int i=0;i<2*tmpn;i++){
	        cin>>arr1[i];
	    }
        sort(arr1, arr1+2*tmpn);
        long long int tmp =INT_MAX; 
	    for(long long int i=0;i<=tmpn;i++){
                tmp = min(tmp, arr1[i+tmpn-1] - arr1[i]);
	    }
	    std::cout << tmp<< std::endl;
	}
	return 0;
}
