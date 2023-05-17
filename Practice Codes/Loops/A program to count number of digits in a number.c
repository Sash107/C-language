#include <stdio.h>
int main (){
    int x,y;
    scanf("%d",&y);
    x=1;
    while (x>=1){
        y= y/10;
        if (y==0)
            break;
            x++;
    }
    printf ("%d digits",x);
}