#include <stdio.h>

int main(){
    
    int i=1701;
    
    if(i<0){
        printf("無效\n");
    }else if(i>0 && i<1500){
        printf("$70");
    }else{
        
        if( (i-1500) % 100 ==0){
        printf("$%d",70+(i-1500)/10);
        }else{
            int j=(i-1500)/100 +1;
            printf("$%d",70+j*10);
        }
        
    }
    return 0;
}
