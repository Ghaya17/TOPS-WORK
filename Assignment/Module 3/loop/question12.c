//program in armstrong number using for and while loop.
#include<stdio.h>
int main(){
int num, rem, sum=0;
printf("Enter number:");
scanf("%d", &num);
int ori_num=sum;
while(num>0){
    rem=num%10;
    sum+=rem*rem*rem;
    num/=10;
}
printf("sum=%d\n", sum);
if(ori_num==sum){
printf("It is an armstrong number");

}
else{
    printf("It is not an armstrong number");
}



}