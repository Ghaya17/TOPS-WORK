//Pattern 1.
//1
//1 0
//1 0 1
//1 0 1 0
//1 0 1 0 1
#include<stdio.h>
int main(){
int row, colm;
for(row=1; row<=5; row++){
       for(colm=1; colm<=row; colm++){
           if(colm%2==0){
            printf(" 0");
           }
        else{
            printf(" 1");
        }


       }
    
printf("\n");

}





















    
}