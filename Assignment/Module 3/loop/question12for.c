//armstrong number for loop.
#include<stdio.h>
int main(){
int num, rem,temp, sum=0, n=0;
printf("Enter number:");
scanf("%d", &num);
int ori_num=num;
for(temp=num; temp!=0; n++){
    temp/=10;
}
for(temp=num; temp>0; temp/=10){
    rem=temp%10;
    sum+= rem*rem*rem;
}
printf("sum=%d\n", sum);
if(ori_num==sum){
    printf("It is an armstrong number");
}
else{
    printf("It is not an armstrong number");
}













}