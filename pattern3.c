#include<stdio.h>
int main(){
    int row,i,j;
    printf("enter a num of rows:");
    scanf("%d",&row);
    for(i=row;i>1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
    