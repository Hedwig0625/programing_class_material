//after providing a number i,takes input for mileage i and calcuate the taxi.
//Assuming the fare is 70 dollars for milleage below 1500 meters
//an addtional 10 dollars for every 100 meters over 1600
//with distance less than 100 meters counted as 100 meters.

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
