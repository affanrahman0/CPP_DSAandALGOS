#include<iostream>
using namespace std;
#include<math.h>
#define pi 3.14
//cube
float volume(float x)
{
    return pow(x,3);
}
float volume(float l,float b, float h)
{
     
    return l*b*h;;
}

float volume(float r,float h)
{
    return (pi *  pow(r,2) *h );
}
 int main ()
 {
     float cube = volume(4.5);
     float rectangularbox = volume(4,4,4);
     float cylinder = volume(4,4);
     cout<<cube<<endl;
     cout<<rectangularbox<<endl;
     cout<<cylinder<<endl;
 }