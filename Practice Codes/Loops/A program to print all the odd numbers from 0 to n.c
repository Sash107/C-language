#include <stdio.h>
int main () {
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=0;i<=n;i++){
        if (i%2==1){
            printf("%d ",i);
        i++;
        }
    }
}