#include <stdio.h>
int main(){
    int x;
    printf ("program to check weather a number is divisible by 5 and 11 or not \n\n");
    printf ("Enter the number :");
    scanf ("%d",&x);
    if (x%5==0 && x%11!=0){
        printf ("%d is divisible by 5", x);
    }
    else{
        if (x%11==0 && x%5!=0){
            printf("%d is divisible by 11", x);
        }
        else{
            if (x%55==0){
                printf ("%d is divisible by both 5 and 11",x);
            }
            else{
                printf ("%d is neither divisible by 5 nor 11 ", x);
            }
        }
    }
}