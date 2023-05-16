#include <stdio.h>
int main(){
    int n,i;
    i=1;
    printf ("Enter the number: ");
    scanf ("%d",&n);
    while (i<n+1){
        printf("%d, ",i);
        i++ ;
    }
}
