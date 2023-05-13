#include <stdio.h>
int main (){
    int a;
    float b,c;
    printf ("Temperature convertor \n");
    printf ("press 1 for Fahrenheit to Celsius convertor \n");
    printf ("press 2 for Celsius to Fahrenheit convertor \n");
    scanf ("%d",&a);
    if (a==1){
        printf ("The value of Temperature in °C = ");
        scanf ("%f", &b);
        c= (9.0/5.0)*b +32 ;
        printf ("The Temprature in °F is %.2f", c);
    }
    else{
        if (a==2){
        printf ("The value of Temperature in °F = ");
        scanf ("%f", &b);
        c= (5.0/9.0)*(b-32);
        printf ("The Temperature in °C is %.2f",c);
        }
        else {
            printf ("Wrong input");
        }
    }
    }

