#include <stdio.h>
int main(){
    int x,n;
    printf ("Enter the number for multiplication table: ");
    scanf ("%d",&n);
    for (x=1;x<=10;x++){
        printf("%d*%d = %d \n", n,x,n*x);
    }
}