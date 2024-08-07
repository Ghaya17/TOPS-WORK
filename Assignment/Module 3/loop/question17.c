//Calculate 5 number from user and calsulate number of even and odd using while loop.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    int even=0, odd=0;
    int count =0;
    while(count<5)
    {  
        printf("Enter number %d:", count+1);
    scanf("%d",&num);
    if(num%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
      count++;
    }
    printf("Even Number = %d ",even);
    printf("Odd Number = %d ",odd);
}