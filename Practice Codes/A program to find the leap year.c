#include <stdio.h>
int main (){
    int x;
    printf ("Enter the year = ");
    scanf ("%d",&x);
    if (x%4 ==0){
        printf( "This year is a leap year");
    }
    else {
        printf ("This year is not a leap year");
    }
}
