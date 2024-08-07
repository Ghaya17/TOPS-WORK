//Categorize according to person height
#include<stdio.h>
int main(){
float height;
printf("Enter height of a person (in centimeteres):");
scanf("%f", &height);
if (height < 150){
    printf("\nPerson is short");
}
else if(height >=150 && height < 165){
    printf("\nperson is average heighted");
}
else if (height >=165 && height<=185){
    printf("\nPerson is taller");
}
else {
    printf("Invalid height");
}















}