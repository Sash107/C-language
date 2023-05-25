#include <stdio.h>
int main (){
    int n,x=3,i,j,a,b,mul;
    printf("Enter a number: ");
    scanf ("%d",&n);
    if (n>99||n<1000){
        a=n;
        b=n;
        mul=0;
        for (i=1;i<=3;i++){
            b=a%10;
            a=a/10;
                mul = mul +b*b*b;
            
        }
        if (mul==n){
            printf ("Armstrong number");
        }
        else {
            printf ("not a armstrong number");
        }
    }
    else {
        printf("wrong input!!!!!");
    }
}