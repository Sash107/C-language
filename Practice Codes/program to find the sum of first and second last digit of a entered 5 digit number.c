#include <stdio.h>
int main (){
    int x,y,z;
    printf ("Enter the 5 digit number - ");
    scanf ("%d",&x);
    y= (x%100)/10;
    z= x/10000;
    printf ("The sum of first and second last digit of the given number is equal to %d", z+y);
}