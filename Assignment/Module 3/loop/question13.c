//factorial of given number using loop.
#include<stdio.h>
int main(){
int num, res=1;
printf("Enter number:");
scanf("%d", &num);
int i=num;
while (i>=1){
    res=res * i;
    --i;
}
printf("factorial of given number %d", res);

}