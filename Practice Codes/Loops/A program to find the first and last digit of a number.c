#include <stdio.h>
int main(){
    int x,y,n,i;
    printf("Enter the number :");
    scanf ("%d",&n);
    y=n%10;
    x=n;
    for(i=1;i>=1;i++){
        x= x/10;
        if (x<10)
        break;
    }
    printf ("The sum of first and last digit = %d",x+y);
}