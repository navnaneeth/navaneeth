#include<stdio.h>
int main(){
    int a,b=0,c,d;
    printf("enter the number");
    scanf("%d",&a);
    for(c=2;c<a;c++){
        d=a%c;
        if(d==0){
            b=1;
        }
    }
    if(b==0){
        printf("the number is prime");
    }
    else{
        printf("the number is not prime");
    }
    return 0;
}
