#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int n=0;
    int i;
    for(i=0;i<10;i++){
        n+=a[i];

    }
printf("sum of array:%d\n",n);
return 0;
}
