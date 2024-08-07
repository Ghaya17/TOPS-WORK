//program to check uppercase, lowercase, digit or special character.
#include<stdio.h>
int main(){
char ch;
printf("Enter number:");
scanf("%d", &ch);
if (ch >=65 && ch <=90){
    printf("Upper case letter");
}
else if(ch >=97 && ch<= 122){
    printf("Lower case letter");
}
else if(ch >=48 && ch<=57){
    printf("Numbers");
}
else {
    printf("Symbols");
}


















}