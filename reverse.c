#include<stdio.h>
int main(){
    int n,resversed=0,remainder;
    printf("enter the num:");
    scanf("%d",&n);
    while(n!=0){
        remainder=n%10;
        resversed=resversed*10+remainder;
        n/=10;
    }
    printf("resversed num:%d\n,resersed");
    return 0;
}


