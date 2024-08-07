//convert fehrenhit to celcius
#include<stdio.h>
int main() {
    float fehrenhit,celcius;
  printf("Enter Temperature Fahrenheit : ") ;
  scanf("%f",&fehrenhit);
  celcius = (fehrenhit - 32 ) *5 /9;
  printf("Temperature Celsius : %f",celcius);

}