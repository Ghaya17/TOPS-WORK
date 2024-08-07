//Determine eligiblity for admission.
#include<stdio.h>
int main(){
int maths, phy, chem, total1, total2;
printf("Marks in maths:");
scanf("%d", &maths);
printf("Marks in phy:");
scanf("%d", &phy);
printf("Marks in chem:");
scanf("%d", &chem);
total1=maths+phy+chem;
total2=maths+phy;
printf("\nTotal in all subject:%d", total1);
printf("\nTotal of maths and physics:%d", total2);
if(maths >=65 && phy >=55 && chem >=50 && total1>=190 || total2 >=140){
    printf("\nPerson is eligible");
}

else{
printf("\nPerson is not eligible");
}





















}