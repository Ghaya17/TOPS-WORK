//Accept 5 number from user and find its factorial.
#include<stdio.h>
int fact(int n){              //recursion
int i, res=1;
for(i=1; i<=n;i++){
res=res*i;
}
return res;                   
}
int main(){
int i;
int num [5];
printf("Enter 5 numbers of your choice:");
for(i=0;i<5;i++){
    scanf("%d", &num[i]);
}

for(i=0;i<5;i++){
    int res = fact(num[i]);
printf("\nFactorial of %d is %d", num[i], res);

}
}