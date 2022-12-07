#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int cas;
    cin>>cas;
    while(cas--)
    {
        int tmp1,tmp2;
        cin>>tmp1>>tmp2;
        int p=pow(2, tmp2);
        for(int i=1;i<=tmp1;i++)
        {
            p/=2;
        }
        std::cout << p << std::endl;
    }
	return 0;
}
