#include <stdio.h>
int main(){
    int x;
    printf ("Enter the number : ");
    scanf ("%d",&x);
    if (x>0)
    {
        printf("%d is positive number",x);
    }
    else
    {
        if (x<0)
        {
            printf ("%d is a negetive number", x);
        }
        else
        {
            printf ("The entered number is 0");
        }
    }
}