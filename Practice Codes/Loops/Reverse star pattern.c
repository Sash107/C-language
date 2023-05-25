#include <stdio.h>
int main (){
    int n,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for (i=1;i<=3;i++){
        for (j=1;j<i;j++){
            printf (" ");
        }
        for (j=1;j<=2*n-1;j++){
            printf("*");
        }
        printf ("\n");
    }
}