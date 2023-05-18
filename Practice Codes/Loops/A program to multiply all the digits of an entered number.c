#include <stdio.h>
int main(){
    int x,y,n,product,i;
    printf ("Enter the number: ");
    scanf ("%d",&n);
    product = n%10;
    x=n;
    for (i=1;i>=1;i++){
        x=x/10;
        y=x%10;
        product = product *y;
        if (x<10)
        break;
    }
    printf ("The product of the digits of entered number = %d\n", product);
}