
#include<stdio.h>
int main(){
    int n,f=1;
    printf("enter a postive integer");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f*=i;
    } 
    printf("f of %d:5d\n",n,f);
    return 0;
}