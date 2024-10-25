//WAP to find factorial using recursion.
#include<stdio.h>
int factorial(int n) {
    if (n!=0) {
     return n * factorial(n - 1);
    } 
    else {
        return 1; 
    }
}

int main(){
 int num;
     printf("Enter number:");
     scanf("%d", &num);
     printf("Factorial of %d is:%d", num, factorial(num));

}