#include <stdio.h>

int main()
{
    int choice=11;
    
   while(choice !=11){
        printf("請輸入想印出的乘法表（1~9,10->所有乘法表,11->離開)\n");
        
        if(choice>0 && choice<=9){
            for(int j=1;j <= 9;j++){
                printf("%d * %d = %d\n",choice,j,choice*j);
            }
        }else if(choice == 10){
            for(int k=1; k <=9;k++){
                for(int j=1;j <= 9;j++){
                printf("%d * %d = %d\n",k,j,k*j);
            }
             printf("\n");
            }
        }else if(choice ==11){
            printf("程式結束\n");
            return 0;
        }else{
            printf("錯誤\n");
        }
   }
   printf("程式結束\n");
    return 0;
}

