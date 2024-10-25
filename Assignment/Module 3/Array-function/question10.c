//WAP to perform Palindrome number using for loop and function
#include <stdio.h>
int Palindrome(int num) {
    int i;
    int orinum = num;
    int rev = 0;

    for (i=0; num> 0; num /= 10) {
        rev = rev * 10 + num % 10;
    }
    
    return orinum == rev;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (Palindrome(num)) {
        printf("it is a palindrome.\n", num);
    } else {
        printf("it is not a palindrome.\n", num);
    }

}