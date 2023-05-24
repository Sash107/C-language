#include <stdio.h>
int main (){
    int n,i,j,x;
    float value=1,sum=1,factorial;
    printf ("Total terms in the series: ");
    scanf ("%d",&n);
    printf ("value of x: ");
    scanf ("%d",&x);
    for (i=1;i<=((2*n)-2);i++){
        factorial =1;
        if (i%2==0){
            value = -(x*x*value);
            for (j=1;j<=i;j++){
                factorial = factorial*j;
            }
            sum= sum+ (value/factorial);
        }
    }
    printf ("%.5f",sum);
}