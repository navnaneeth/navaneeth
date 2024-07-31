#include<stdio.h>
int main(){
    int a[]={5,8,9,10,16,56,44,555};
    a[0]=8;
    int size=sizeof(a)/sizeof(a[0]);
printf("%d",a[0]);
printf("\n%d",size);
for (int i=0;i< size;i++){
    printf("\n%d",a[i]);

    }


}