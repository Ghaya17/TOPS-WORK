//simple calculator using conditional statement.
#include<stdio.h>
int main(){
int num1, num2, res, total,ch;
printf("Enter value of number 1 and number 2:");
scanf("%d %d",&num1,&num2);
printf("\nEnter 1 for addition:");
printf("\nEnter 2 for subtraction:");
printf("\nEnter 3 for multiplication:");
printf("\nEnter 4 for division:");
printf("\nEnter 5 for modulo:");
printf("\nEnter number of your choice:");
scanf("%d", &ch);
if(ch==1){
    total=num1+num2;
    printf("\nTotal of number1 and number2:%d", total);
}
else if(ch==2){
    total=num1-num2;
    printf("\nTotal of number1 and number2:%d", total);
}
else if(ch==3){
    total=num1*num2;
    printf("\nTotal of number1 and number2:%d", total);
}
else if(ch==4){
    total=num1/num2;
    printf("\nTotal of number1 and number2:%d", total);
}
else if(ch==5){
    total=num1%num2;
    printf("\nTotal of number1 and number2:%d", total);

}
else{
    printf("invalid input");
}
}