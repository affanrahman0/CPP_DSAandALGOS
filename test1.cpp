#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<vector>
using namespace std;
template <class T>

// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--)
//     {
        
//         long int n,k,arr[100006],y=pow(10,9),i,*a,*b,m,c=0;
//         scanf("%ld%ld",&n,&k);
//         for(i=0;i<n;i++)
//         {
//             scanf("%ld",&arr[i]);
//         }
//         a = (long int*)calloc(y,sizeof(long int));
//         b = (long int*)calloc(y,sizeof(long int));
//         for(i=0;i<y;i++)
//         {
//             a[arr[i]]+=1;
//         }
//         for(i=0;i<y;i++)
//         {
//             b[arr[i]^k]+=1;
//         }
//         for(m=b[0]+a[0],i=1;i<y;i++)
//         {
//             if(m<a[i]+b[i]) 
//             {
//                 m = a[i]+b[i];
//                 c = b[i];
//             }
//         }
//         printf("%ld %ld",m,c);
//     }

// }

bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set <string> strset;
        int c=9, r = 9;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(board[i][j]!='.')
                {
                    string row = "row"+ to_string(i)+ to_string(board[i][j]);
                    string col = "col"+ to_string(j)+ to_string(board[i][j]);
                    string box = "box"+ to_string((i/3)*3+j/3)+ to_string(board[i][j]);
                    if (strset.find(row) != strset.end() && strset.find(col) != strset.end() && strset.find(box) != strset.end())
                    {
                      return false;
                                                

                    }
                    else 
                    {
                        
                          
                        strset.insert(row) ;
                        strset.insert(col) ;
                        strset.insert(box) ;

                    }
                }
            }
        }
        
        return true;
    }