#include <stdio.h>
int main(){
    int x,n,sum;
    sum=0;
    printf("Enter the value of last number: ");
    scanf ("%d",&n);
    for (x=0;x<=n;x++){
        sum= sum+x;
    }
    printf("%d\n",sum);
}