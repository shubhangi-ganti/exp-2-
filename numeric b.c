#include<stdio.h>
int main(){
    float amount;
    float simple_interest;
    float time;
    printf("enter your available amount : \n");
    scanf("%f",&amount);
    
    printf("enter the time limit in years : \n");
    scanf("%f",&time);
    
    printf("the rate of interest is 2.0 ");
     
    simple_interest = (amount * time * 2.0)/100;
     
    printf("the simple interst on the amount %f is %f \n",amount,simple_interest); 
    return 0;
    } 
