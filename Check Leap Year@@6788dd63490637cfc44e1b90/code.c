#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year % 4 ==0 && year % 100 !=100 || year % 400 ==0){
        printf("Not a Leap Year");
    }
    else{
        printf("Leap year");
    }
    return 0;
}