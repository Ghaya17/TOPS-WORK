//Accept 5 numbers from user and display it.
#include<stdio.h>
int main(){
int num[5];
int i;
for(i=0; i<5; i++){
    printf("\n Enter numbers %d:", i+1);
    scanf("%d", &num[i]);
}
printf("\n The number you have enetred are:");
for(i=0; i<5; i++){
    printf("\n%d", num[i]);
    }
 
}