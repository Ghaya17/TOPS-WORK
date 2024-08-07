//Print table upto given number.
#include<stdio.h>
int main(){
int num;
printf("ENter number:");
scanf("%d", &num);
printf("table for %d:\n", num);
for(int i=1; i<=10; ++i ){
    printf("%d * % d = %d\n", num, i, num * i);
}

}