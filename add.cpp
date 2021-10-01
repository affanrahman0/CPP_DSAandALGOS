#include<iostream>
using namespace std;
#include<string.h>
// #include<stdio.h>

char* add(char a,char b)
{
    char* arr =(char*) malloc(3*sizeof(char));
    arr[0] = 'x';
    arr[1] = 'y';
    arr[2] = '\0';
    
    return arr;

}

char* add(char a,char* b)
{
    char* arr =(char*) malloc((30)*sizeof(char));
    arr[0] = a;
    arr[1] = ' ';
    arr[2] ='\0';
    strcat(arr,b);

    return arr;
    // int n = strlen(b),k=0;
    // char* arr =(char*) malloc((n+2)*sizeof(char));
    // arr[k++] = a;
    // arr[k++] = ' ';
    // for(int i=0;i<n;i++)
    // {
    //     arr[k++] = b[i];
    // }
    // arr[k] = '\0';
    
    // return arr;


}
char* add(char* b,char a)
{
    char* arr =(char*) malloc((30)*sizeof(char));
    arr[0] = ' ';
    arr[1] = a;
    arr[2] ='\0';
    strcat(b,arr);


    // int n = strlen(b),k=0;
    // char* arr =(char*) malloc((n+2)*sizeof(char));
    
    // for(int i=0;i<n;i++)
    // {
    //     arr[k++] = b[i];
    // }
    // arr[k++] = ' ';
    // arr[k++] = a;
    // arr[k] = '\0';
    
    
    return b;


}

char* add(char* a, char* b)
{
    strcat(a,b);

    return a;


    // int n = strlen(a),k=0,m = strlen(b);
    // char* arr =(char*) malloc((n+m+1)*sizeof(char));

    // for(int i=0;i<n;i++)
    // {
    //     arr[k++] = a[i];
    // }

    // arr[k++] =' ';

    // for(int i=0;i<n;i++)
    // {
    //     arr[k++] = b[i];
    // }
    // arr[k]='\0';
    
    // return arr;
}

int main()
{
    
    char t[] = "country";
    cout<<add('x','y')<<endl;
    
    
    cout<< add('a',t)<<endl; 

    char b[] = "how are";
    cout<< add(b,'u')<<endl; 


    char c[] = "Sister Nivedita";
    char d[] = " University";

    cout<< add(c,d)<<endl;   

    
    
    
    return 0;
}
