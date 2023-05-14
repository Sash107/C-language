#include <stdio.h>
int main (){
    int x,y;
    printf ("A program to find the maximum between two numbers: \n\n");
    printf ("Enter the 1st number : ");
    scanf("%d",&x);
    printf ("Enter the 2nd number : ");
    scanf ("%d",&y);
    if (x>y){
        printf ("%d is maximum", x);
    }
    else{
        if (y>x){
        printf("%d is maximum", y);
        }
        else{
            printf ("Both numbers are same");
        } 
    }
}