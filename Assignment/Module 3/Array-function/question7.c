//WAP to find out length ofstring without using inbuilt function.
#include<stdio.h>
int main(){
char str[25];
int i;
int length=0;
printf("Enter string:");
gets(str);
while(str[length]!='\0'){
     length++;
}

printf("length of string is:%d\n", length);


}