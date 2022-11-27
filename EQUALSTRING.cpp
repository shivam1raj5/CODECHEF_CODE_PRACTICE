#include <bits/stdc++.h>
//||
using namespace std;

int main() {
	// your code goes here
	int cas;
	cin>>cas;
	while(cas--)
	{
	    long long int s,p=0,q,r=0,k;
	    cin>>s;
	    string tmp1,tmp2,tmp3=" ";
	    cin>>tmp1>>tmp2;
	   
	    for(int i=0;i<s;i++)
	    {
	        if(tmp2[i]==tmp1[i])
	        {
	            /*if(temp2[i]-tmp1[i]<=0)
	            {
	                
	            }*/
	            p+=1;
	        }
	           else
	            {
	                /*p=temp2[i]-tmp1[i];
	                if(p>q)
	                {
	                    q=p;
	                }*/
	                k+=1;
	                tmp3+=tmp2[i];
	            }
	        
	        
	    }
	    sort(tmp3.begin(),tmp3.end());
	    for(int i=0;i<tmp3.size()-1;i++)
	    {
	        if(tmp3[i]!=tmp3[i+1])
	        {
	            r+=1;
	        }
	    }
	    std::cout << r << std::endl;
	}
	return 0;
}
