#include <stdio.h>
int main(){
    int year,days;
    scanf("%d",&year);
    if(days<=365 || days>366){
        printf("Not a Leap Year");
    }
    if(days==366){
        printf("Leap year");
    }
    return 0;
}