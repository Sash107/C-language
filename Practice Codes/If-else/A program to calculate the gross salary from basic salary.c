#include <stdio.h>
int main (){
    float x,y,z;
    printf("Enter the basic salary: ");
    scanf ("%f",&x);

    if(x>=0){
         if (x<=10000){
        printf ("Basic Salary= %.2f\n", x);
        y= (x/100.0)*20.0;
        z= (x/100.0)*80.0;
        printf("Total HRA= %.2f\n", y);
        printf("Total DA= %.2f\n\n",z);
        printf("Gross Salary: %.2f", x+y+z);
    }
    if  ((x>10000)&&(x<=20000)){
        printf ("Basic Salary= %.2f\n", x);
        y= (x/100.0)*25.0;
        z= (x/100.0)*90.0;
        printf("Total HRA= %.2f\n", y);
        printf("Total DA= %.2f\n\n",z);
        printf("Gross Salary: %.2f\n", x+y+z);
    }
    if  (x>20000){
        printf ("Basic Salary= %.2f\n", x);
        y= (x/100.0)*30.0;
        z= (x/100.0)*95.0;
        printf("Total HRA= %.2f\n", y);
        printf("Total DA= %.2f\n\n",z);
        printf("Gross Salary: %.2f\n", x+y+z);
    }
}
    else {
        printf ("Wrong Input");
    }
}