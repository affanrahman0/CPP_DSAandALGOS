#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,r;
        scanf("%lld",&n);
        r = n * (n+1)/2;
        while((r%2) != 0)
        {
            r-=n;
            n--;
        }
        printf("%d\n",r);


    }
        
    return 0;
}