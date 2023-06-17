#include <stdio.h>
int main (){
    int n,i,j,k=3;
    printf("Enter the size of array: \n");
    scanf ("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
       printf ("enter the %d element: \n",i+1);
       scanf ("%d",&a[i]);
       if (a[i]>=n+2){
          k=2;
          printf ("wrong input!!!");
          break;
       }
    }
    if (k==2){
       printf ("\nProgram Ended");
    }
    else {
    for (i=1;i<=n+1;i++){
       for (j=0;j<n;j++){
          if (i==a[j]){
             k=1;
             break;
          }
          else {
             k=0;
          }
       }
       if (k==0){
          break;
       }
    }
    if (k==0){
       printf ("the missing element is %d",i);
    }
    }
return 0;
}

        
