#include<stdio.h>
int main(){
    int rows,i,j;
    printf("enter the num of rows:");
    scanf("%d",&rows);
    for(i=1;1<=rows;i++){
        for(j=1;j<=rows;j++){
            if(i==1|||i==rows||1||rows)
            printf("*");
            else
            printf("");
        }
        printf("\n");
    }
    return 0;
}