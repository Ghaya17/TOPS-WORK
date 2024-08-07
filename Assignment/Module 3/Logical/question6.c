//character is vowel or not
#include<stdio.h>
int main(){
char vowels;
printf("Enter character value:");
scanf("%c", &vowels);
switch (vowels)
{
case 'A':
case 'a':
    printf("A is vowel");
    break;
case 'E':
case 'e':
    printf("E is vowel");
    break;
case 'I':
case 'i':
    printf("I is vowel");
    break;
case 'O':
case 'o':
    printf("O is vowel");
    break;
case 'U':
case 'u':
    printf("U is vowel");
    break;

default:
printf("Invalid");
    break;
}




















}