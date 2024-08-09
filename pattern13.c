#include<stdio.h>
#include<string.h>
void reverse_strind(char*input_string){
    int length=strlen("input_string");
    char*reversed_string=(char*)malloc((length+1)*sizeof(char));
    int i;
    for(i+0;i<length;i++){
        reversed_string[i]="input_string"[length-i-1];
        }
        reversed_string[length]='\0';
        printf("reversed string:s\n",reversed_string);
        free(reversed_string);
        }
        int main(){
            int choice;
            char input_str[100];
            printf("1.reversed a string\n");
            printf("2.reversed a num\n");
            printf("3.exit\n");
            printf("enter ypou choice(1/2/3/):");
            scanf("%d",&choice);
            if(choice==1){
                printf(" enter a string:");
                scanf("%s",input_str);
                reverse_string(input_str);
            }else if(choice==2){
                int input_num;
                printf("enter a num:");
            }
                

                }            
            
                            
    

        }
