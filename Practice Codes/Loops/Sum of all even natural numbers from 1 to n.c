#include <stdio.h>
int main(){
    int x,sum,n;
    sum=0;
    printf ("Enter the last number: ");
    scanf("%d",&n);
    for (x=0;x<=n;x++){
        if(x%2==0){
            sum= sum+x;
        }
    }
    printf("%d",sum);
}