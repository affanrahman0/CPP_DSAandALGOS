#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
	int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k,i,arr[100000],sum=0;
        scanf("%lld%lld",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        sort(arr, arr + n);
        // for (int i = 0; i < n; ++i)
        // cout << arr[i] << " ";
        for(i=0;i<n;i++)
        {
            if(arr[i]>=0) sum+=arr[i];
            else
            {
                if(k>0)
                {
                    sum+= llabs(arr[i]);
                    k--;
                }
                
            }
        }
        printf("%lld\n",sum);


        


    }
	return 0;
}
