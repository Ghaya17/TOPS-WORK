//WAP to show difference between Structure and Union.
//structure:
#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
int main(){
struct student st[2];
int i;
for(i=0; i<2; i++){
    printf("Enter roll no:");
    scanf("%d", &st[i].rollno);
    printf("Enter name of student:");
    scanf("%s", &st[i].name);
    printf("Enter marks:");
    scanf("%f", &st[i].marks);

}
printf("Students details:");
for(i=0; i<2; i++){
printf("\nStudent number: %d", i+1);
printf("\nRoll number: %d", st[i].rollno);
printf("\nStudents name: %s", st[i].name);
printf("\nmarks of student: %f", st[i].marks);

}

}
