#include <stdio.h>
int main (){
    int i,j,n;
    scanf ("%d",&n);

    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            printf ("%d ",n-j+1);
        }
        for (j=1;j<=2*(n-i)-1;j++){
            printf ("%d ",n-i+1);
        }
        for (j=1;j<=i;j++){
            int k=n-i+j;
            if (k!=1){
                printf ("%d ",k);
            }
        }
        printf ("\n");
    }
    for (i=1;i<n;i++){
        for (j=1;j<=n-i;j++){
            printf ("%d ",n-j+1);
        }
        for (j=1;j<=2*i-1;j++){
            printf ("%d ",i+1);
        }
        for (j=1;j<=n-i;j++){
            printf("%d ",i+j);
        }
        printf ("\n");
    }
}
