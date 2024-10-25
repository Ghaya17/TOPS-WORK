//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice.
#include<stdio.h>
int main () {
    int arr1[5],arr2[5];
    char ch1;
    int i, j, temp, choice;
    printf("Enter 5 Element Of Array 1: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter 5 Element of Array 2: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr2[i]);
    }
    printf("Printing Array 1: \n");
    for (i=0;i<5;i++){
        printf("%d \t",arr1[i]);
    }
    printf("\nPrinting Array 2: \n");
    for (i=0;i<5;i++){
        printf("%d \t",arr2[i]);
    }
printf("\nENTER 1 FOR ASCENDING:\n");
printf("\nENTER 2 FOR DECENDING:\n");
printf("\nENTER CHOICE:\n");
scanf("%d", &choice);
switch(choice){
    case 1:
    printf("\nENTER A to select 1st loop:\n");
    printf("\nENTER D to select 2nd loop:\n");
    printf("\nENTER CHOICE:\n");
    scanf("%d", &ch1);
    switch (choice){
        case 1:
      for(i=0; i<5; i++){
      for(j=0; j<5; j++){
        if(arr1[i] > arr1[j]){
            temp=arr1[j];
            arr1[j]=arr1[i];
            arr1[i]=temp;
        }
    }
    printf("\nPrinting array in ascending order:\n");
   for(i=0; i<5; i++){
    printf("%d ", arr1[i]);
   }
   
}
}
break;
     case 2:
     for(i=0; i<5; i++){
     for(j=0; j<5; j++){
        if(arr1[i] < arr2[j]){
            temp=arr2[j];
            arr2[j]=arr1[i];
            arr2[i]=temp;
        }
    }
    printf("\nPrinting array in decending order:\n");
   for(j=0; j<5; j++){
    printf("%d ", arr2[j]);
   }

break;

default:
printf("Invalid choice.\n");
break;
}
}