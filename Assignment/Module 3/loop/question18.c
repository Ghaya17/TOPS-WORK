//print table.
#include<stdio.h>
int main(){
int num;
printf("Enter number:");
scanf("%d", &num);
printf("table for %d\n", num);
for(int i=1; i<=10; ++i ){
    printf("\n%d * %d=%d", num, i, num * i);
}


}