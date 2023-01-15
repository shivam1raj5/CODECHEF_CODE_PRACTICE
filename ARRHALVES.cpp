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
	    long long int arr1[2 * tmpn];
	    for(long long int i=0; i < 2 * tmpn; i++){
	        cin>>arr1[i];
	    }
	    vector<long long int> ar1, ar2;
	    for(long long int i=0;i<tmpn;i++){
	        if(arr1[i]>tmpn){
	            ar1.push_back(i);
	        }
	    }
	    for(long long int i=tmpn;i<2*tmpn;i++){
	        if(arr1[i]<=tmpn){
	            ar2.push_back(i);
	        }
	    }
	    long long int tmpp = 0;
	    for(long long int i=0; i < ar1.size(); i++){
	        tmpp += (ar2[i]-ar1[i]);
	    }
	    cout << tmpp << endl;
	}
	return 0;
}
