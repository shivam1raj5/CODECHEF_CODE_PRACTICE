#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int a1,b1,c1;
	    int i,j,temp;
	    cin>>a1>>b1>>c1;
	    int arr[3];
	    arr[0]=a1;
	    arr[1]=b1;
	    arr[2]=c1;
        for(i=0; i<3; i++)
            {
                for(j=i+1; j<3; j++)
                {
                    if(arr[i]>arr[j])
                    {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
        std::cout << arr[2] << std::endl;
	    
	    
	}
	return 0;
}
