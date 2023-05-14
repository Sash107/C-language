#include <stdio.h>
int main(){
    char ch;
    printf("A Program to check weather the entered charcter is vowel or not \n\n");
    printf ("Enter the character: ");
    scanf ("%c", &ch);

    if (('a'<=ch && ch<='z') || ('A'<=ch && ch<='Z')){
        if (ch== 'a'||ch== 'e'||ch== 'i'||ch== 'o'||ch== 'u'||ch== 'A'||ch== 'E'||ch== 'I'||ch== 'O'||ch== 'U'){
        printf ("The entered character is vowel");
        }
        else{
            printf ("The entered character is a consonant");
        }
    }
    else {
        printf("The entered character is not an alphabet");
    }
}