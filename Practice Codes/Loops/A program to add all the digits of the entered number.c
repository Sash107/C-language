#include <stdio.h>

int main() {
    int n,x,y,i,sum;
    printf("enter your number: ");
    scanf("%d",&n);
    sum= n%10;
    x=n;
    y=n;
    for (i=1;i>=1;i++){
        x=(x/10)%10;
        y= y/10;
        if(x==0)
        break;
        sum += x;
        x=y;
    }
printf ("%d", sum);
    return 0;
}