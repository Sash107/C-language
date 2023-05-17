#include <stdio.h>
int main(){
    int n,x,y,z,a,b,c,d;
    printf ("Enter a number: ");
    scanf ("%d",&n);
    b=n;
    for (a=1;a>=1;a++){
        b= b/10;
        if (b==0)
        break;
    }
    printf ("Total number of digits: %d\n",a);
    x=n;
    for (c=1;c<a;c++){
        x=x/10;
    }
    z=n%10;
    d=x;
    for (c=1;c<a;c++){
        d=d*10;
    }
    y= (n-d)/10;
    for (c=1;c<a;c++){
        z=z*10;
    }
    printf ("%d", z+(y*10)+x);
}