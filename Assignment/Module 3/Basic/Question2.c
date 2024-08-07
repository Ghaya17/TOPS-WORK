//Program to make simple calculator;
#include <stdio.h>
int main () 
{
    int num1, num2, res; //variable
    printf ("Enter numbers");
    scanf ("%d %d", &num1, &num2);
    res=num1+num2; //expression
    printf("\n Addition=%d", res);
    res=num1-num2;
    printf("\n Subtraction=%d", res);
    res=num1*num2;
    printf("\n multiplication=%d", res);
    res=num1/num2;
    printf("\n Division=%d", res);
    res=num1%num2;
    printf("\n modulo=%d", res);
}
