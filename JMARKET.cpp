#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    int x,a,b,c,i,j,temp;
	    cin>>x>>a>>b>>c;
	    int arr[3];
	    arr[0]=a;
	    arr[1]=b;
	    arr[2]=c;
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
	    int d,e,f;
	    d=x-1;
	    e=arr[0]*d;
	    f=arr[1];
	    std::cout << e+f << std::endl;
	    
	}
	return 0;
}
