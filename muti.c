#include<stdio.h>
int main(){
    int a;
    printf("enter a positive intger:");
    scanf("%d",&a);
    printf("muliticaton table of %d;\n",a);
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d\n",a,i,a*i);
    }
    return 0;
}