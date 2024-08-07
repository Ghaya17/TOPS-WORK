//Accept 5 names at run time.
#include<stdio.h>
int main(){
    int i;
char a[5] [20];
for(i=0; i<5; i++){
    printf("Enter names %d:", i+1);
    scanf("%s", &a[i]);

}
printf("List of names you have entered:\n");
for(i=0; i<5; i++){
    printf("%s \n", a[i]);
}



}