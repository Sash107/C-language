#include <stdio.h>
int prime (int);
int main() {
    int s,i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf ("\n");
    for (i=1;i<=n;i++){
        if (n%i==0){
        s= prime(i);
        if (s==1){
            printf ("%d \n",i);
        }
        }
    }
}
int prime (int n){
  int j,x;
  for (j=2; j<n; j++){
      x = n%j;
      if (x==0)
      break;
  }
  if (x==0){
      return (0);
  }
  else{
      return (1);
  }
}