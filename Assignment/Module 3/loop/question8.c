//To find maximum number from given number.
#include<stdio.h>
int main(){
int num, max=0, n;
printf("Enter your number:");
scanf("%d", &num);
while(num>0){
    n=num%10;
    if(n>max){
    max=n;
    }

    num=num/10;
}
printf(" maximum number=%d\n", max);


}