#include <stdio.h>
int main(){
    int amount,note500,note200,note100,note50,note20,note10,coin5,coin2,coin1;
    note500=note200=note100=note50=note20=note10=coin5=coin2=coin1=0;
    printf ("A program to distribute the amount in notes and coins: \n\n");
    printf ("Enter the total amount of money: ");
    scanf ("%d",&amount);
    if (amount >0){
    if (amount>=500){
        note500= amount/500;
        amount -= note500 *500;
    }
    if (amount >=200){
        note200 = amount/200;
        amount -= note200 *200;
    }
    if (amount>=100){
        note100= amount/100;
        amount -= note100 *100;
    }
    if (amount >= 50){
        note50= amount/50;
        amount -= note50 *50;
    }
    if (amount >=20){
        note20= amount/20;
        amount -= note20 *20;
    }
    if (amount >=10){
        note10= amount/10;
        amount -= note10 *10;
    }
    if (amount>=5){
        coin5= amount/5;
        amount -= coin5 *5;
    }
    if (amount>=2){
        coin2= amount/2;
        amount -= coin2 *2;
    }
    if (amount>=1){
        coin1= amount;
    }

    printf ("number of 500rs notes = %d\n", note500);
    printf ("number of 200rs notes = %d\n", note200);
    printf ("number of 100rs notes = %d\n", note100);
    printf ("number of 50rs notes = %d\n", note50);
    printf ("number of 20rs notes = %d\n", note20);
    printf ("number of 10rs notes = %d\n", note10);
    printf ("number of 5rs coin = %d\n", coin5);
    printf ("number of 2rs coin = %d\n", coin2);
    printf ("number of 1rs coin = %d\n", coin1);
    }
    
    else{
        printf("Please enter a valid amount\n\n");
    }
}