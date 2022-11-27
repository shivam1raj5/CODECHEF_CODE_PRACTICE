#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int cas;
    cin>>cas;
    while(cas--)
    {
        int tmp1;
        cin>>tmp1;
        vector <int> arr1(tmp1);
        for(int i=0;i<tmp1;i++)
        {
            cin>>arr1[i];
        }
        int tmp2;
        cin>>tmp2;
        set <int> arr2;
        for(int i=0;i<tmp2;i++)
        {
            int tmp3;
            cin>>tmp3;
            arr2.insert(tmp3);
        }
        for(int i=0;i<tmp1;i++)
        {
            /*for(int j=0;j<tmp1;j++)
            {*/
                if(arr2.count(arr1[i]))
                {
                    //tmp1--;
                    
                    /*for(int k=j;k<tmp1;k++)
                    {
                         arr1[k]=arr1[k+1];  
                    }*/
                    continue;
                }
                else
                {
                    std::cout << arr1[i] <<" ";
                }
            //}
            
        }
        /*for(int i=0;i<tmp1;i++)
        {
            std::cout << arr1[i]<<" ";
        }*/
        cout<<endl;
    }
	return 0;
}
