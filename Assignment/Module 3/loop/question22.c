//Accept 3 numbers from user using while loop and check each numbers palindrome.
#include<stdio.h>
int main(){
int n,i;
int original_number;
int rem, rev;
for (i = 0; i <=2; i++) {
        printf("Enter number %d: \n", i + 1);
        scanf("%d", &original_number);
        n=original_number;
       rev=0;
while(n!=0){
    rem=n%10;
    rev=(rev*10)+rem;
    n=n/10;
}
printf("Reverse number is:%d \n", rev);

 if(rev==original_number){
    printf("%d is a palindrome\n", original_number);
   }
else{
    printf("%d is not a palindrome\n", original_number);
    }
}
}