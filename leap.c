#include<stdio.h>
int main(){
    int a=2025;
    if((a%4==0&&a%100!=0)||(a%400==0)){
        printf("%d is a leap year\n",a);
    }
    else{
        printf("%d is not a leap year\n",a); 
    }
   
}

