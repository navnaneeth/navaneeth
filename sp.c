#include<stdio.h>
int main(){
    int a=10,b=88;
    printf("swap:a=%d||b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf ("\nafter swap:a=%d||b%d",a,b);
return 0;
}