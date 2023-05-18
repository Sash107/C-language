#include <stdio.h>
int main (){
    int x,y,n,i,j,rev;
    printf ("Enter the number: ");
    scanf ("%d",&n);
    x=n;
    for (i=1;i>=1;i++){
        x=x/10;
        if (x==0)
        break;
    }
    printf ("Total number of digits: %d\n",i);
    x=n;
    rev=n%10;
    for (j=1;j<i;j++){
        x=x/10;
        y=x%10;
        rev= (rev*10)+y;
    }
    printf ("Reverse of the entered number = %d\n",rev);
}