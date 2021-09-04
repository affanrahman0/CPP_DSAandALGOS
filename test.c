#include<stdio.h>
#include<stdlib.h>
int maxSubArray(int* arr, int n){

    int i,j,k,s=0;
    for(i=0;i<n;i++)
    {
        int m=0;
        for(j=i;j<n;j++)
        {
            m+=arr[j];
            if(m>s) s = m; 
            // int m=0;
            // for(k=i;k<=j;k++)
            // {
            //     m+=arr[k];
            // }
            // if(m>s) s = m; 
        }
    }
    return s;

}