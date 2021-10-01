int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes){
    int nr = matSize, nc = *matColSize;        
    if (nr * nc - r * c) {
        *returnSize = nr;
        *returnColumnSizes = matColSize;
        return mat;
    }
    *returnColumnSizes = (int*) malloc(r * sizeof(int));
    int **a = (int**) malloc(r*sizeof(int*));
    for (int i = 0; i < r; ++i) {
        a[i] = (int*) malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c;
    }
    
    int x =0 ;
    int y=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            a[i][j] = mat[x][y++];
            if(y==nc)
            {
                x++;
                y=0;
            }
        }
    }
    *returnSize = r;    
    return a;
}

int** generate(int r, int* n, int** brr){
    
    *n =r;
    
    int **arr = (int**) malloc(sizeof(int*)*r);
    
        for(int i=0 ;i<r;i++)
        {
            arr[i] = (int*) malloc((1+i)*sizeof(int));
            arr[i][0]=1;
            arr[i][i]=1;
        }
    
    *brr = (int*)malloc(r*sizeof(int));
    
    for(int i=0 ;i<*n;i++)
    {
        (*brr)[i] = i+1;
    }
    for(int i=2;i<r;i++)
    {
        for(int j=1;j<i;j++)
        {
            arr[i][j] = arr[1-1][j-1]+arr[i-1][j];
        }
    }
    return arr;
}