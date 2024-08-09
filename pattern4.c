#include<stdio.h>
int main(){
    int rows,i,j;
    printf("enter the num of rows:");
    scan("%d",&rows);
    for(j=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}