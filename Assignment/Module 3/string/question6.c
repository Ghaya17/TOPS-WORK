//Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() 
{
    char str[100]; 
    int alp=0,digit=0,splch=0,i=0; 

    printf("\nCount total number of alphabets, digits, and special characters :\n");
    printf("--------------------------------------------------------------------\n");
    printf("Input the string : ");
    fgets(str, sizeof str, stdin); 
    
    while (str[i] != '\0') 
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            alp++; 
        } 
        else if (str[i] >= '0' && str[i] <= '9') 
        {
            digit++; 
        } 
        else 
        {
            splch++; 
        }
        i++; 
    }

    printf("Number of Alphabets in the string is : %d\n",alp);
    printf("Number of Digits in the string is : %d\n",digit);
    printf("Number of Special characters in the string is : %d\n\n",splch);
}