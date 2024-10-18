#include <stdio.h>

int main(){
    int currYear;
    printf("enter your year: \n");
    scanf("%d",&currYear);
    
    
    
    if(currYear%4==0){
        if(currYear%100==0){
           
            if(currYear%400==0){
            printf("it is leap year");
        }
        else{
             printf("it is not leap year");
        }
        }
    
        
        else{
            printf("it is leap year");
        }
    }
    else{
        printf("it is not leap year");
    }
    
    
    
    
    
    
    return 0;
    
}
