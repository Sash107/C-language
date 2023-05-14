#include <stdio.h>
int main(){
    int x,y,z;
    printf ("A program to find maximum between 3 numbers: \n\n");
    printf ("Enter the 1st number: ");
    scanf ("%d",&x);
    printf ("Enter the 2nd number: ");
    scanf ("%d",&y);
    printf ("Enter the 3rd number: ");
    scanf("%d", &z);
  if (x>y){
    if (x>z){
        printf ("%d is the maximum", x);
    }
    else{
        printf ("%d is the maximum", z);
    }
  }
  else{
    if (y>z){
        printf("%d is the maximum", y);
    }
    else{
        printf ("%d is the maximum", z);
    } 
  }    
}