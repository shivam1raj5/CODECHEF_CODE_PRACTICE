#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--){
	    int num;
	    cin>>num;
	    int arr1[num],arr2[num];
	    for(int i=0;i<num;i++){
	        cin>>arr1[i];
	    }
	    for(int i=0;i<num;i++){
	        cin>>arr2[i];
	    }
	    int p=0;
	    for(int i=0;i<num;i++){
	        int p1=arr1[i]*2;
	        int p2=arr2[i]*2;
	        if(arr2[i]<=p1 && arr1[i]<=p2){
	            p++;
	        }
	    }
	    std::cout << p << std::endl;
	}
	return 0;
}
