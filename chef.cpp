#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
bool isPerfect(int N)
{
    if ((sqrt(N) - floor(sqrt(N))) != 0)
        return false;
    return true;
}
int closest(int n)
{
    n--;
    while(true)
    {
        if (isPerfect(n)) {
               return n;
            }
            else
                n--;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a;
        scanf("%d%d",&n,&a);
        if(n>4)
        {
            printf("%d\n",a);
        }
        else
        {
            if(isPerfect(n))
            {
                printf("%d\n",sqrt(n*a*a));
            }
            else
            {
                int m= closest(n);
                printf("%d\n",sqrt(m*a*a));
            }
        }
    }
        
    return 0;
}