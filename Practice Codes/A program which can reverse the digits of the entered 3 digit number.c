#include <stdio.h>
int main (){
    int x,a,b,c;
    printf ("Enter the 3 digit number- ");
    scanf ("%d",&x);
    a= x/100;
    b= (x%100)/10;
    c= x%10;
    printf("The reverse of the entered digits will be %d", c*100+b*10+a);
    }