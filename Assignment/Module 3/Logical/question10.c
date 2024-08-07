//number is positive or not
#include<stdio.h>
int main(){
int num;
printf("Enter your number:");
scanf("%d", &num);
if(num>0){
    printf("Number is positive");
}
else if(num<0){
    printf("number is negative");
}
else if(num==0){
    printf("number is zero");
}
else {
    ("invalid");
}

}